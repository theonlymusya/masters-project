#ifndef AST_BUILDER_HPP
#define AST_BUILDER_HPP

#include <optional>
#include <string>
#include <variant>
#include <vector>
#include "ASTContext.hpp"
#include "small_c_grammarBaseListener.h"
#include "small_c_grammarParser.h"

class ASTBuilder : public small_c_grammarBaseListener {
   public:
    explicit ASTBuilder() = default;  // Явный конструктор по умолчанию

    ASTContext context;

    void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext* ctx) override;
    void enterForStatement(small_c_grammarParser::ForStatementContext* ctx) override;
    void exitForStatement(small_c_grammarParser::ForStatementContext* ctx) override;
    void enterExpression(small_c_grammarParser::Math_exprContext* ctx);
    void enterIfStatement(small_c_grammarParser::IfStatementContext* ctx) override;
    void exitIfStatement(small_c_grammarParser::IfStatementContext* ctx) override;

   private:
    std::vector<std::variant<std::string, ASTContext::LoopInfo>> currentLoopBody;
    std::vector<std::string> currentIfBody;
    std::string currentIfCondition;
};

#endif  // AST_BUILDER_HPP