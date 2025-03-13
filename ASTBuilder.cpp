#include "ASTBuilder.hpp"
#include "ASTContext.hpp"

void ASTBuilder::enterVarDeclaration(small_c_grammarParser::VarDeclarationContext* ctx) {
    std::string varType = ctx->children[0]->getText();
    std::string varName = ctx->ID()->getText();

    std::optional<std::string> value = std::nullopt;
    if (ctx->math_expr()) {
        value = ctx->math_expr()->getText();
    }

    bool isArray = ctx->arrayDecl() != nullptr;
    std::optional<std::string> arraySize =
        isArray ? std::optional(ctx->arrayDecl()->math_expr()->getText()) : std::nullopt;

    context.addVariable(varName, varType, value, isArray, arraySize);
}

void ASTBuilder::enterForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    std::string varName;
    std::string start;
    std::string end;
    std::string step;

    // Инициализация (forStart)
    if (ctx->forStart()->varDeclaration()) {
        varName = ctx->forStart()->varDeclaration()->ID()->getText();
        start = ctx->forStart()->varDeclaration()->math_expr()->getText();
    } else {
        return;  // Некорректный случай
    }

    // Условие выхода (forStop)
    end = ctx->forStop()->math_expr()->getText();

    // Шаг итерации (forStep)
    if (ctx->forStep()->math_expr()) {
        step = ctx->forStep()->math_expr()->getText();
    } else {
        step = (ctx->forStep()->getText().find("++") != std::string::npos) ? "1" : "-1";
    }
}

void ASTBuilder::exitForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    std::string varName = ctx->forStart()->varDeclaration()->ID()->getText();
    std::string start = ctx->forStart()->varDeclaration()->math_expr()->getText();
    std::string end = ctx->forStop()->math_expr()->getText();
    std::string step;

    if (ctx->forStep()->math_expr()) {
        step = ctx->forStep()->math_expr()->getText();
    } else {
        step = (ctx->forStep()->getText().find("++") != std::string::npos) ? "1" : "-1";
    }

    context.addLoop(varName, start, end, step, currentLoopBody);
    currentLoopBody.clear();
}

void ASTBuilder::enterExpression(small_c_grammarParser::Math_exprContext* ctx) {
    std::string expr = ctx->getText();
    if (!currentIfBody.empty()) {
        currentIfBody.push_back(expr);
    } else if (!currentLoopBody.empty()) {
        currentLoopBody.push_back(expr);
    } else {
        context.addExpression(expr);
    }
}

void ASTBuilder::enterIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    currentIfCondition = ctx->math_expr()->getText();
    currentIfBody.clear();
}

void ASTBuilder::exitIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    context.addIfCondition(currentIfCondition, currentIfBody);
}
