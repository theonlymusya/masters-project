
// Generated from small_c_grammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "small_c_grammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by small_c_grammarParser.
 */
class  small_c_grammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by small_c_grammarParser.
   */
    virtual std::any visitProgram(small_c_grammarParser::ProgramContext *context) = 0;

    virtual std::any visitFunction(small_c_grammarParser::FunctionContext *context) = 0;

    virtual std::any visitStatement(small_c_grammarParser::StatementContext *context) = 0;

    virtual std::any visitBlock(small_c_grammarParser::BlockContext *context) = 0;

    virtual std::any visitIfStatement(small_c_grammarParser::IfStatementContext *context) = 0;

    virtual std::any visitForStatement(small_c_grammarParser::ForStatementContext *context) = 0;

    virtual std::any visitForInit(small_c_grammarParser::ForInitContext *context) = 0;

    virtual std::any visitWhileStatement(small_c_grammarParser::WhileStatementContext *context) = 0;

    virtual std::any visitReturnStatement(small_c_grammarParser::ReturnStatementContext *context) = 0;

    virtual std::any visitVarDeclaration(small_c_grammarParser::VarDeclarationContext *context) = 0;

    virtual std::any visitVarDeclarationNoSemi(small_c_grammarParser::VarDeclarationNoSemiContext *context) = 0;

    virtual std::any visitArrayDecl(small_c_grammarParser::ArrayDeclContext *context) = 0;

    virtual std::any visitExpression(small_c_grammarParser::ExpressionContext *context) = 0;

    virtual std::any visitExpression1(small_c_grammarParser::Expression1Context *context) = 0;

    virtual std::any visitAssignmentExpression(small_c_grammarParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitConditionalExpression(small_c_grammarParser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(small_c_grammarParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(small_c_grammarParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(small_c_grammarParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(small_c_grammarParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitPrefixOperator(small_c_grammarParser::PrefixOperatorContext *context) = 0;

    virtual std::any visitPostfixExpression(small_c_grammarParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitPostfixPart(small_c_grammarParser::PostfixPartContext *context) = 0;

    virtual std::any visitPrimaryExpression(small_c_grammarParser::PrimaryExpressionContext *context) = 0;


};

