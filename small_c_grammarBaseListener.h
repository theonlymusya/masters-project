
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

  virtual void enterForInit(small_c_grammarParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(small_c_grammarParser::ForInitContext * /*ctx*/) override { }

  virtual void enterWhileStatement(small_c_grammarParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(small_c_grammarParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(small_c_grammarParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(small_c_grammarParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(small_c_grammarParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(small_c_grammarParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterVarDeclarationNoSemi(small_c_grammarParser::VarDeclarationNoSemiContext * /*ctx*/) override { }
  virtual void exitVarDeclarationNoSemi(small_c_grammarParser::VarDeclarationNoSemiContext * /*ctx*/) override { }

  virtual void enterArrayDecl(small_c_grammarParser::ArrayDeclContext * /*ctx*/) override { }
  virtual void exitArrayDecl(small_c_grammarParser::ArrayDeclContext * /*ctx*/) override { }

  virtual void enterExpression(small_c_grammarParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(small_c_grammarParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterExpression1(small_c_grammarParser::Expression1Context * /*ctx*/) override { }
  virtual void exitExpression1(small_c_grammarParser::Expression1Context * /*ctx*/) override { }

  virtual void enterAssignmentExpression(small_c_grammarParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(small_c_grammarParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(small_c_grammarParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(small_c_grammarParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(small_c_grammarParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(small_c_grammarParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(small_c_grammarParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(small_c_grammarParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(small_c_grammarParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(small_c_grammarParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(small_c_grammarParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(small_c_grammarParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterPrefixOperator(small_c_grammarParser::PrefixOperatorContext * /*ctx*/) override { }
  virtual void exitPrefixOperator(small_c_grammarParser::PrefixOperatorContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(small_c_grammarParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(small_c_grammarParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixPart(small_c_grammarParser::PostfixPartContext * /*ctx*/) override { }
  virtual void exitPostfixPart(small_c_grammarParser::PostfixPartContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(small_c_grammarParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(small_c_grammarParser::PrimaryExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

