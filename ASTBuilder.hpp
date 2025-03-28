#pragma once

#include <optional>
#include <stack>
#include <string>
#include <variant>
#include <vector>
#include "ASTContext.hpp"
#include "small_c_grammarBaseListener.h"
#include "small_c_grammarParser.h"

struct ElseIf {
    std::string condition;
    std::vector<Instruction> block;
};

struct IfNode {
    std::string condition;
    std::vector<Instruction> thenBlock;
    std::vector<ElseIf> elseIfBranches;
    std::vector<Instruction> elseBlock;
};

// Класс ASTBuilder наследуется от слушателя ANTLR4 и строит AST,
// заполняя ASTContext и учитывая области видимости, вложенные блоки и ветвления if.
class ASTBuilder : public small_c_grammarBaseListener {
   public:
    ASTBuilder();
    virtual ~ASTBuilder();

    // Получить итоговый ASTContext для дальнейшей обработки
    ASTContext& getASTContext();

    void enterProgram(small_c_grammarParser::ProgramContext* ctx) override;
    void exitProgram(small_c_grammarParser::ProgramContext* ctx) override;

    void enterFunction(small_c_grammarParser::FunctionContext* ctx) override;
    void exitFunction(small_c_grammarParser::FunctionContext* ctx) override;

    void enterBlock(small_c_grammarParser::BlockContext* ctx) override;
    void exitBlock(small_c_grammarParser::BlockContext* ctx) override;

    void enterAssignmentOp(small_c_grammarParser::AssignmentOpContext* ctx) override;
    void exitAssignmentOp(small_c_grammarParser::AssignmentOpContext* ctx) override;

    void enterIncDecOp(small_c_grammarParser::IncDecOpContext* ctx) override;
    void exitIncDecOp(small_c_grammarParser::IncDecOpContext* ctx) override;

    void enterIfStatement(small_c_grammarParser::IfStatementContext* ctx) override;
    void exitIfStatement(small_c_grammarParser::IfStatementContext* ctx) override;

    void handleElifChain(small_c_grammarParser::ElifChainContext* ctx, IfNode& node);
    void handleElseBranch(small_c_grammarParser::ElseBranchContext* ctx, IfNode& node);

    void enterForStatement(small_c_grammarParser::ForStatementContext* ctx) override;
    void exitForStatement(small_c_grammarParser::ForStatementContext* ctx) override;

    void enterMathExpr(small_c_grammarParser::MathExprContext* ctx) override;
    void exitMathExpr(small_c_grammarParser::MathExprContext* ctx) override;

   private:
    bool insideForHeader = false;
    ASTContext astContext;

    // cтек для накопления инструкций текущего блока
    std::stack<std::vector<Instruction>> blockStack;
    // cтек для временного хранения if-операторов
    std::stack<IfNode> ifStack;
    // cтек для тел циклов for (если требуется выделять отдельно)
    std::stack<std::vector<Instruction>> loopBodyStack;

    // буфер для хранения текста текущего выражения
    std::string currentExpr;

    void addInstruction(const Instruction& instr);
    void beginBlock();
    std::vector<Instruction> endBlock();
};
