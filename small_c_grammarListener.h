
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

  virtual void enterWhileStatement(small_c_grammarParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(small_c_grammarParser::WhileStatementContext *ctx) = 0;

  virtual void enterReturnStatement(small_c_grammarParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(small_c_grammarParser::ReturnStatementContext *ctx) = 0;

  virtual void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) = 0;

  virtual void enterAssignment(small_c_grammarParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(small_c_grammarParser::AssignmentContext *ctx) = 0;

  virtual void enterCondition(small_c_grammarParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(small_c_grammarParser::ConditionContext *ctx) = 0;

  virtual void enterExpression(small_c_grammarParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(small_c_grammarParser::ExpressionContext *ctx) = 0;


};

