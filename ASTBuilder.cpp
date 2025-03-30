#include "ASTBuilder.hpp"
#include <cstdlib>
#include <iostream>

// вспомогательная функция для создания инструкции ASSIGNMENT из строкового выражения
Instruction makeAssignmentInstruction(const std::string& expr) {
    return Instruction{InstructionType::ASSIGNMENT, expr};
}

// вспомогательная функция для открытия блока
void ASTBuilder::beginBlock() {
    blockStack.push({});
    scopeStack.push({});
}

// вспомогательная функция для закрытия блока
ScopedBlock ASTBuilder::endBlock() {
    ScopedBlock block;

    block.instructions = blockStack.top();
    blockStack.pop();

    block.localScope = scopeStack.top();
    scopeStack.pop();

    return block;
}

// вспомогательная функция накапливания инструкций в текущем блоке
void ASTBuilder::addInstruction(const Instruction& instr) {
    if (!blockStack.empty()) {
        blockStack.top().push_back(instr);
    } else {
        std::cerr << "[WARNING] addInstruction called with empty block stack!\n";
    }
}

// вспомогательная функция накапливания переменных в текущем блоке
void ASTBuilder::addVariable(const std::string& name,
                             const std::string& type,
                             const std::optional<std::string>& value,
                             bool isArray,
                             const std::vector<int>& dimensions) {
    VarInfo info{type, value, isArray, 0, dimensions};
    if (!scopeStack.empty()) {
        scopeStack.top()[name] = info;
    } else {
        std::cerr << "[WARNING] addVariable called with empty scope stack!\n";
    }
}

ASTBuilder::ASTBuilder() {}

ASTBuilder::~ASTBuilder() {}

ASTContext& ASTBuilder::getASTContext() {
    return astContext;
}

void ASTBuilder::enterProgram(small_c_grammarParser::ProgramContext* ctx) {
    blockStack.push({});
    scopeStack.push({});
}

void ASTBuilder::exitProgram(small_c_grammarParser::ProgramContext* ctx) {
    if (!blockStack.empty()) {
        ScopedBlock top = endBlock();
        astContext.addProgram(top);
    }
}

void ASTBuilder::enterFunction(small_c_grammarParser::FunctionContext* ctx) {
    // функция – это блок с собственной областью видимости
    beginBlock();
}

void ASTBuilder::exitFunction(small_c_grammarParser::FunctionContext* ctx) {
    ScopedBlock funcBlock = endBlock();

    Instruction funcInstr;
    funcInstr.type = InstructionType::MAIN_FUNC;
    funcInstr.data = funcBlock;

    addInstruction(funcInstr);
}

void ASTBuilder::enterBlock(small_c_grammarParser::BlockContext* ctx) {
    beginBlock();
}

void ASTBuilder::exitBlock(small_c_grammarParser::BlockContext* ctx) {
    ScopedBlock block = endBlock();

    Instruction blockInstr;
    blockInstr.type = InstructionType::BLOCK;
    blockInstr.data = block;

    addInstruction(blockInstr);
}

// assignmentOp
//     : declaration? varName ('=' mathExpr)?
//     ;
void ASTBuilder::enterAssignmentOp(small_c_grammarParser::AssignmentOpContext* ctx) {
    if (ctx->declaration()) {
        std::string varType = ctx->declaration()->getText();
        std::string varName = ctx->varName()->getText();
        std::optional<std::string> value = std::nullopt;
        if (ctx->mathExpr()) {
            value = ctx->mathExpr()->getText();
        }
        std::vector<int> dimensions;
        bool isArray = (ctx->varName()->arrayDecl() != nullptr);
        if (isArray) {
            auto exprs = ctx->varName()->arrayDecl()->mathExpr();
            for (auto* expr : exprs) {
                try {
                    dimensions.push_back(std::stoi(expr->getText()));
                } catch (...) {
                    std::cerr << "Ошибка преобразования размерности массива: " << expr->getText()
                              << std::endl;
                    dimensions.push_back(0);  // безопасное значение по умолчанию
                }
            }
        }
        addVariable(varName, varType, value, isArray, dimensions);
    }
    // Начинаем формировать строку выражения.
    currentExpr = ctx->getText();
}

void ASTBuilder::exitAssignmentOp(small_c_grammarParser::AssignmentOpContext* ctx) {
    // Сохраняем инструкцию присваивания
    addInstruction(makeAssignmentInstruction(currentExpr));
    currentExpr.clear();
}

// --- Инкремент/декремент ---
void ASTBuilder::enterIncDecOp(small_c_grammarParser::IncDecOpContext* ctx) {
    currentExpr = ctx->getText();
}

void ASTBuilder::exitIncDecOp(small_c_grammarParser::IncDecOpContext* ctx) {
    if (!insideForHeader) {
        addInstruction(makeAssignmentInstruction(currentExpr));
    }
    currentExpr.clear();
}

void ASTBuilder::enterIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    IfNode newIf;
    newIf.condition = ctx->cond->getText();

    ifStack.push(newIf);
    beginBlock();
}

void ASTBuilder::handleElifChain(small_c_grammarParser::ElifChainContext* ctx, IfNode& node) {
    for (size_t i = 0; i < ctx->elifCond.size(); ++i) {
        std::string cond = ctx->elifCond[i]->getText();

        beginBlock();

        antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, ctx->statement(i));

        auto block = endBlock();

        node.elseIfBranches.push_back(ElseIf{cond, block});
    }
}

void ASTBuilder::handleElseBranch(small_c_grammarParser::ElseBranchContext* ctx, IfNode& node) {
    beginBlock();

    antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, ctx->statement());

    node.elseBlock = endBlock();
}

void ASTBuilder::exitIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    auto currentIf = ifStack.top();
    ifStack.pop();

    auto thenBlock = endBlock();
    currentIf.thenBlock = thenBlock;

    if (ctx->elifChain()) {
        handleElifChain(ctx->elifChain(), currentIf);
    }

    if (ctx->elseBranch()) {
        handleElseBranch(ctx->elseBranch(), currentIf);
    }

    Instruction ifInstr;
    ifInstr.type = InstructionType::IF_STATEMENT;

    IfStatement finalIf;
    finalIf.condition = currentIf.condition;
    finalIf.thenBlock = currentIf.thenBlock;
    for (const auto& elif : currentIf.elseIfBranches) {
        finalIf.elseIfBranches.push_back(ElseIfStatement{elif.condition, elif.block});
    }
    finalIf.elseBlock = currentIf.elseBlock;

    ifInstr.data = finalIf;
    addInstruction(ifInstr);
}

void ASTBuilder::enterForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    beginBlock();
    insideForHeader = true;
}

void ASTBuilder::exitForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    // Забираем тело цикла
    auto loopBody = endBlock();

    // Считываем параметры цикла
    std::string varName, start, end, step = "1";

    if (ctx->forStart() && ctx->forStart()->assignmentOp()) {
        varName = ctx->forStart()->assignmentOp()->varName()->getText();
        if (ctx->forStart()->assignmentOp()->mathExpr()) {
            start = ctx->forStart()->assignmentOp()->mathExpr()->getText();
        }
    }

    if (ctx->forStop() && ctx->forStop()->mathExpr()) {
        end = ctx->forStop()->mathExpr()->getText();
    }

    if (ctx->forStep()) {
        if (ctx->forStep()->mathExpr()) {
            step = ctx->forStep()->mathExpr()->getText();
        } else {
            std::string op = ctx->forStep()->getText();
            step = (op.find("++") != std::string::npos) ? "1" : "-1";
        }
    }

    Instruction forLoopInstr;
    forLoopInstr.type = InstructionType::FOR_LOOP;
    forLoopInstr.data = LoopInfo{varName, start, end, step, loopBody.instructions};
    addInstruction(forLoopInstr);

    insideForHeader = false;
}

// --- Выражения ---
void ASTBuilder::enterMathExpr(small_c_grammarParser::MathExprContext* ctx) {
    // Для простоты буферизуем текст выражения.
    // currentExpr = ctx->getText();
}

void ASTBuilder::exitMathExpr(small_c_grammarParser::MathExprContext* ctx) {
    // Выражения, как правило, входят в состав других инструкций, поэтому здесь просто очищаем буфер.
    // currentExpr.clear();
}
