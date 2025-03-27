#include "ASTBuilder.hpp"
#include <cstdlib>
#include <iostream>

// Вспомогательная функция для создания инструкции типа ASSIGNMENT из строкового выражения.
Instruction makeAssignmentInstruction(const std::string& expr) {
    return Instruction{InstructionType::ASSIGNMENT, expr};
}

ASTBuilder::ASTBuilder() {
    // инициализируем стек, помещая верхнеуровневый блок
    blockStack.push(std::vector<Instruction>());
}

ASTBuilder::~ASTBuilder() {}

ASTContext& ASTBuilder::getASTContext() {
    // По завершении сборки, добавляем накопленные верхнеуровневые инструкции в ASTContext.
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
    blockStack.push(std::vector<Instruction>());
    astContext.pushScope();
}

void ASTBuilder::exitBlock(small_c_grammarParser::BlockContext* ctx) {
    auto blk = blockStack.top();
    blockStack.pop();
    // Добавляем блок как отдельную инструкцию.
    addInstruction(Instruction{InstructionType::BLOCK, blk});
    astContext.popScope();
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
        bool isArray = (ctx->varName()->arrayDecl() != nullptr);
        int arraySize = 0;
        if (isArray) {
            try {
                arraySize = std::stoi(ctx->varName()->arrayDecl()->mathExpr()->getText());
            } catch (...) {
                std::cerr << "Ошибка преобразования размера массива для переменной " << varName << std::endl;
            }
        }
        astContext.addVariable(varName, varType, value, isArray, arraySize);
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
    addInstruction(makeAssignmentInstruction(currentExpr));
    currentExpr.clear();
}

// --- ifStatement с поддержкой else-if и else ---
void ASTBuilder::enterIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    // Создаём новый узел if.
    IfNode newIf;
    newIf.condition = ctx->mathExpr()->getText();
    ifStack.push(newIf);
    // Для then-ветки создаём новый блок.
    blockStack.push(std::vector<Instruction>());
    astContext.pushScope();
}

void ASTBuilder::exitIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    // Завершаем сбор then-блока.
    auto thenBlock = blockStack.top();
    blockStack.pop();
    astContext.popScope();

    IfNode currentIf = ifStack.top();
    ifStack.pop();
    currentIf.thenBlock = thenBlock;

    // Если есть ветка else (или else if) – второй потомок statement.
    if (ctx->statement().size() > 1) {
        std::string elseText = ctx->statement(1)->getText();
        // Если текст начинается с "if", считаем это веткой else-if.
        if (elseText.substr(0, 2) == "if") {
            // Здесь для простоты добавляем ветку else-if с условием и пустым телом.
            // В полноценном решении можно рекурсивно объединять вложенные if.
            currentIf.elseIfBranches.push_back({elseText, {}});
        } else {
            // Иначе – обычный else.
            // Для else создаём новый блок (можно использовать и getText(), если блок не задан в фигурных
            // скобках).
            std::vector<Instruction> elseBlock;
            elseBlock.push_back(makeAssignmentInstruction(elseText));
            currentIf.elseBlock = elseBlock;
        }
    }
    // Формируем инструкцию if и добавляем в текущий блок.
    Instruction ifInstr;
    ifInstr.type = InstructionType::IF_STATEMENT;
    IfStatement ifNode;
    ifNode.condition = currentIf.condition;
    ifNode.thenBlock = currentIf.thenBlock;
    ifNode.elseIfBranches = currentIf.elseIfBranches;
    ifNode.elseBlock = currentIf.elseBlock;
    ifInstr.data = ifNode;
    addInstruction(ifInstr);
}

// --- forStatement ---
void ASTBuilder::enterForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    // Для цикла for создаём блок для тела и новую область видимости.
    loopBodyStack.push(std::vector<Instruction>());
    blockStack.push(std::vector<Instruction>());
    astContext.pushScope();
}

void ASTBuilder::exitForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    // Завершаем сбор тела цикла.
    auto loopBody = blockStack.top();
    blockStack.pop();
    astContext.popScope();
    if (!loopBodyStack.empty()) {
        auto temp = loopBodyStack.top();
        loopBodyStack.pop();
        if (!temp.empty()) {
            loopBody = temp;
        }
    }
    // Извлекаем параметры цикла из forStart, forStop и forStep.
    std::string varName, start, end, step;
    if (ctx->forStart() && ctx->forStart()->assignmentOp()) {
        varName = ctx->forStart()->assignmentOp()->varName()->getText();
        if (ctx->forStart()->assignmentOp()->mathExpr())
            start = ctx->forStart()->assignmentOp()->mathExpr()->getText();
    }
    if (ctx->forStop() && ctx->forStop()->mathExpr()) {
        end = ctx->forStop()->mathExpr()->getText();
    }
    step = "1";
    if (ctx->forStep()) {
        if (ctx->forStep()->mathExpr()) {
            step = ctx->forStep()->mathExpr()->getText();
        } else {
            std::string op = ctx->forStep()->getText();
            step = (op.find("++") != std::string::npos) ? "1" : "-1";
        }
    }
    // Формируем инструкцию цикла.
    Instruction loopInstr;
    loopInstr.type = InstructionType::FOR_LOOP;
    LoopInfo loopInfo{varName, start, end, step, loopBody};
    loopInstr.data = loopInfo;
    addInstruction(loopInstr);
}

// --- Выражения ---
void ASTBuilder::enterMathExpr(small_c_grammarParser::MathExprContext* ctx) {
    // Для простоты буферизуем текст выражения.
    currentExpr = ctx->getText();
}

void ASTBuilder::exitMathExpr(small_c_grammarParser::MathExprContext* ctx) {
    // Выражения, как правило, входят в состав других инструкций, поэтому здесь просто очищаем буфер.
    currentExpr.clear();
}
