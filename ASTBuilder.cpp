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
    astContext.pushScope();
}

// вспомогательная функция для закрытия блока
std::vector<Instruction> ASTBuilder::endBlock() {
    auto block = blockStack.top();
    blockStack.pop();
    astContext.popScope();
    return block;
}

ASTBuilder::ASTBuilder() {
    // инициализируем стек, помещая верхнеуровневый блок
    blockStack.push(std::vector<Instruction>());
}

ASTBuilder::~ASTBuilder() {}

ASTContext& ASTBuilder::getASTContext() {
    // по завершении сборки добавляем накопленные верхнеуровневые инструкции в ASTContext
    if (!blockStack.empty()) {
        astContext.addBlock(blockStack.top());
    }
    return astContext;
}

void ASTBuilder::addInstruction(const Instruction& instr) {
    if (!blockStack.empty()) {
        blockStack.top().push_back(instr);
    }
}

// --- Правило program ---
void ASTBuilder::enterProgram(small_c_grammarParser::ProgramContext* ctx) {
    // верхнеуровневый блок уже создан
}

void ASTBuilder::exitProgram(small_c_grammarParser::ProgramContext* ctx) {
    // ничего дополнительного не требуется
}

// --- Функция (main) ---
void ASTBuilder::enterFunction(small_c_grammarParser::FunctionContext* ctx) {
    // функция – это блок с собственной областью видимости
    blockStack.push(std::vector<Instruction>());
    astContext.pushScope();
}

void ASTBuilder::exitFunction(small_c_grammarParser::FunctionContext* ctx) {
    auto funcBlock = blockStack.top();
    blockStack.pop();
    astContext.addBlock(funcBlock);
    astContext.popScope();
}

// --- Блок ---
void ASTBuilder::enterBlock(small_c_grammarParser::BlockContext* ctx) {
    beginBlock();
}

void ASTBuilder::exitBlock(small_c_grammarParser::BlockContext* ctx) {
    auto block = endBlock();
    // добавляем блок как отдельную инструкцию
    addInstruction(Instruction{InstructionType::BLOCK, block});
}

// --- AssignmentOp (объявление и/или присваивание) ---
void ASTBuilder::enterAssignmentOp(small_c_grammarParser::AssignmentOpContext* ctx) {
    // Если присутствует объявление, добавляем переменную в таблицу символов
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

        astContext.addVariable(varName, varType, value, isArray, dimensions);
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

    Instruction instr;
    instr.type = InstructionType::IF_STATEMENT;

    IfStatement finalIf;
    finalIf.condition = currentIf.condition;
    finalIf.thenBlock = currentIf.thenBlock;
    for (const auto& elif : currentIf.elseIfBranches) {
        finalIf.elseIfBranches.push_back(ElseIfStatement{elif.condition, elif.block});
    }
    finalIf.elseBlock = currentIf.elseBlock;

    instr.data = finalIf;
    addInstruction(instr);
}

// --- forStatement ---
void ASTBuilder::enterForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    blockStack.push(std::vector<Instruction>());
    astContext.pushScope();
    insideForHeader = true;
}

void ASTBuilder::exitForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    // Забираем тело цикла
    auto loopBody = blockStack.top();
    blockStack.pop();
    astContext.popScope();

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

    // Формируем инструкцию цикла
    Instruction loopInstr;
    loopInstr.type = InstructionType::FOR_LOOP;
    loopInstr.data = LoopInfo{varName, start, end, step, loopBody};
    addInstruction(loopInstr);
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
