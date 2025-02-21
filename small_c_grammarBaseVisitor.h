
// Generated from small_c_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "small_c_grammarVisitor.h"


/**
 * This class provides an empty implementation of small_c_grammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  small_c_grammarBaseVisitor : public small_c_grammarVisitor {
public:

  virtual std::any visitProgram(small_c_grammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(small_c_grammarParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(small_c_grammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(small_c_grammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(small_c_grammarParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(small_c_grammarParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInit(small_c_grammarParser::ForInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(small_c_grammarParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(small_c_grammarParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclarationNoSemi(small_c_grammarParser::VarDeclarationNoSemiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDecl(small_c_grammarParser::ArrayDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(small_c_grammarParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression1(small_c_grammarParser::Expression1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(small_c_grammarParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(small_c_grammarParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(small_c_grammarParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(small_c_grammarParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(small_c_grammarParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(small_c_grammarParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefixOperator(small_c_grammarParser::PrefixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(small_c_grammarParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixPart(small_c_grammarParser::PostfixPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(small_c_grammarParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

