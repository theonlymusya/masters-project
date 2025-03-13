
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

    virtual std::any visitForStart(small_c_grammarParser::ForStartContext *context) = 0;

    virtual std::any visitForStop(small_c_grammarParser::ForStopContext *context) = 0;

    virtual std::any visitForStep(small_c_grammarParser::ForStepContext *context) = 0;

    virtual std::any visitVarDeclaration(small_c_grammarParser::VarDeclarationContext *context) = 0;

    virtual std::any visitArrayDecl(small_c_grammarParser::ArrayDeclContext *context) = 0;

    virtual std::any visitMath_expr(small_c_grammarParser::Math_exprContext *context) = 0;


};

