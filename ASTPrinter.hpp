#ifndef AST_PRINTER_HPP
#define AST_PRINTER_HPP

#include <iostream>
#include "small_c_grammarBaseVisitor.h"
#include "small_c_grammarParser.h"

class ASTPrinter : public small_c_grammarBaseVisitor {
   private:
    int indent = 1;

    void printIndent() {
        for (int i = 0; i < indent; i++)
            std::cout << "  ";
    }

   public:
    std::any visitProgram(small_c_grammarParser::ProgramContext* ctx) override;
    std::any visitFunction(small_c_grammarParser::FunctionContext* ctx) override;
    std::any visitVarDeclaration(small_c_grammarParser::VarDeclarationContext* ctx) override;
    std::any visitIfStatement(small_c_grammarParser::IfStatementContext* ctx) override;
    std::any visitForStatement(small_c_grammarParser::ForStatementContext* ctx) override;
};

#endif  // AST_PRINTER_HPP
