
// Generated from small_c_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "small_c_grammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by small_c_grammarParser.
 */
class  small_c_grammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(small_c_grammarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(small_c_grammarParser::ProgramContext *ctx) = 0;

  virtual void enterFunction(small_c_grammarParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(small_c_grammarParser::FunctionContext *ctx) = 0;

  virtual void enterStatement(small_c_grammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(small_c_grammarParser::StatementContext *ctx) = 0;

  virtual void enterBlock(small_c_grammarParser::BlockContext *ctx) = 0;
  virtual void exitBlock(small_c_grammarParser::BlockContext *ctx) = 0;

  virtual void enterIfStatement(small_c_grammarParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(small_c_grammarParser::IfStatementContext *ctx) = 0;

  virtual void enterForStatement(small_c_grammarParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(small_c_grammarParser::ForStatementContext *ctx) = 0;

  virtual void enterForInit(small_c_grammarParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(small_c_grammarParser::ForInitContext *ctx) = 0;

  virtual void enterWhileStatement(small_c_grammarParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(small_c_grammarParser::WhileStatementContext *ctx) = 0;

  virtual void enterReturnStatement(small_c_grammarParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(small_c_grammarParser::ReturnStatementContext *ctx) = 0;

  virtual void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) = 0;

  virtual void enterVarDeclarationNoSemi(small_c_grammarParser::VarDeclarationNoSemiContext *ctx) = 0;
  virtual void exitVarDeclarationNoSemi(small_c_grammarParser::VarDeclarationNoSemiContext *ctx) = 0;

  virtual void enterArrayDecl(small_c_grammarParser::ArrayDeclContext *ctx) = 0;
  virtual void exitArrayDecl(small_c_grammarParser::ArrayDeclContext *ctx) = 0;

  virtual void enterExpression(small_c_grammarParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(small_c_grammarParser::ExpressionContext *ctx) = 0;

  virtual void enterExpression1(small_c_grammarParser::Expression1Context *ctx) = 0;
  virtual void exitExpression1(small_c_grammarParser::Expression1Context *ctx) = 0;

  virtual void enterAssignmentExpression(small_c_grammarParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(small_c_grammarParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(small_c_grammarParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(small_c_grammarParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(small_c_grammarParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(small_c_grammarParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(small_c_grammarParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(small_c_grammarParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(small_c_grammarParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(small_c_grammarParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(small_c_grammarParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(small_c_grammarParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterPrefixOperator(small_c_grammarParser::PrefixOperatorContext *ctx) = 0;
  virtual void exitPrefixOperator(small_c_grammarParser::PrefixOperatorContext *ctx) = 0;

  virtual void enterPostfixExpression(small_c_grammarParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(small_c_grammarParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPostfixPart(small_c_grammarParser::PostfixPartContext *ctx) = 0;
  virtual void exitPostfixPart(small_c_grammarParser::PostfixPartContext *ctx) = 0;

  virtual void enterPrimaryExpression(small_c_grammarParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(small_c_grammarParser::PrimaryExpressionContext *ctx) = 0;


};

