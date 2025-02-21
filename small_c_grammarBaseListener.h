
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

  virtual void enterWhileStatement(small_c_grammarParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(small_c_grammarParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(small_c_grammarParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(small_c_grammarParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(small_c_grammarParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(small_c_grammarParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(small_c_grammarParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterCondition(small_c_grammarParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(small_c_grammarParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpression(small_c_grammarParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(small_c_grammarParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

