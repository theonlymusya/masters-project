
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

  virtual std::any visitForStart(small_c_grammarParser::ForStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStop(small_c_grammarParser::ForStopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStep(small_c_grammarParser::ForStepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(small_c_grammarParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDecl(small_c_grammarParser::ArrayDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMath_expr(small_c_grammarParser::Math_exprContext *ctx) override {
    return visitChildren(ctx);
  }


};

