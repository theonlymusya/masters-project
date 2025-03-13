
// Generated from small_c_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "small_c_grammarListener.h"


/**
 * This class provides an empty implementation of small_c_grammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  small_c_grammarBaseListener : public small_c_grammarListener {
public:

  virtual void enterProgram(small_c_grammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(small_c_grammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunction(small_c_grammarParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(small_c_grammarParser::FunctionContext * /*ctx*/) override { }

  virtual void enterStatement(small_c_grammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(small_c_grammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(small_c_grammarParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(small_c_grammarParser::BlockContext * /*ctx*/) override { }

  virtual void enterIfStatement(small_c_grammarParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(small_c_grammarParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(small_c_grammarParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(small_c_grammarParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForStart(small_c_grammarParser::ForStartContext * /*ctx*/) override { }
  virtual void exitForStart(small_c_grammarParser::ForStartContext * /*ctx*/) override { }

  virtual void enterForStop(small_c_grammarParser::ForStopContext * /*ctx*/) override { }
  virtual void exitForStop(small_c_grammarParser::ForStopContext * /*ctx*/) override { }

  virtual void enterForStep(small_c_grammarParser::ForStepContext * /*ctx*/) override { }
  virtual void exitForStep(small_c_grammarParser::ForStepContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(small_c_grammarParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterArrayDecl(small_c_grammarParser::ArrayDeclContext * /*ctx*/) override { }
  virtual void exitArrayDecl(small_c_grammarParser::ArrayDeclContext * /*ctx*/) override { }

  virtual void enterMath_expr(small_c_grammarParser::Math_exprContext * /*ctx*/) override { }
  virtual void exitMath_expr(small_c_grammarParser::Math_exprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

