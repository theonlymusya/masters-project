
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

  virtual void enterForStart(small_c_grammarParser::ForStartContext *ctx) = 0;
  virtual void exitForStart(small_c_grammarParser::ForStartContext *ctx) = 0;

  virtual void enterForStop(small_c_grammarParser::ForStopContext *ctx) = 0;
  virtual void exitForStop(small_c_grammarParser::ForStopContext *ctx) = 0;

  virtual void enterForStep(small_c_grammarParser::ForStepContext *ctx) = 0;
  virtual void exitForStep(small_c_grammarParser::ForStepContext *ctx) = 0;

  virtual void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) = 0;

  virtual void enterArrayDecl(small_c_grammarParser::ArrayDeclContext *ctx) = 0;
  virtual void exitArrayDecl(small_c_grammarParser::ArrayDeclContext *ctx) = 0;

  virtual void enterMath_expr(small_c_grammarParser::Math_exprContext *ctx) = 0;
  virtual void exitMath_expr(small_c_grammarParser::Math_exprContext *ctx) = 0;


};

