#ifndef AST_PRINTER_H
#define AST_PRINTER_H

#include <iostream>
#include "small_c_grammarBaseVisitor.h"

class ASTPrinter : public small_c_grammarBaseVisitor {
   private:
    int indent = 1;  // Отступ для форматирования

    void printIndent() {
        for (int i = 0; i < indent; i++)
            std::cout << "  ";
    }

   public:
    // Главная программа
    virtual std::any visitProgram(small_c_grammarParser::ProgramContext* ctx) override {
        std::cout << "Program:" << std::endl;
        return visitChildren(ctx);
    }

    // Функция main
    virtual std::any visitFunction(small_c_grammarParser::FunctionContext* ctx) override {
        printIndent();
        std::cout << "Function: main" << std::endl;
        indent++;
        visitChildren(ctx);
        indent--;
        return nullptr;
    }

    // Объявление переменной
    virtual std::any visitVarDeclaration(small_c_grammarParser::VarDeclarationContext* ctx) override {
        printIndent();
        std::cout << "VarDeclaration: " << ctx->ID()->getText();
        if (ctx->expression()) {
            std::cout << " = " << ctx->expression()->getText();
        }
        std::cout << std::endl;
        return nullptr;
    }

    // If-else
    virtual std::any visitIfStatement(small_c_grammarParser::IfStatementContext* ctx) override {
        printIndent();
        std::cout << "If condition: " << ctx->condition()->getText() << std::endl;
        indent++;
        visitChildren(ctx);
        indent--;
        return nullptr;
    }

    // Цикл for
    virtual std::any visitForStatement(small_c_grammarParser::ForStatementContext* ctx) override {
        printIndent();
        std::cout << "For loop: " << ctx->condition()->getText() << std::endl;
        indent++;
        visitChildren(ctx);
        indent--;
        return nullptr;
    }

    // Цикл while
    virtual std::any visitWhileStatement(small_c_grammarParser::WhileStatementContext* ctx) override {
        printIndent();
        std::cout << "While condition: " << ctx->condition()->getText() << std::endl;
        indent++;
        visitChildren(ctx);
        indent--;
        return nullptr;
    }

    // Return
    virtual std::any visitReturnStatement(small_c_grammarParser::ReturnStatementContext* ctx) override {
        printIndent();
        std::cout << "Return: " << ctx->expression()->getText() << std::endl;
        return nullptr;
    }
};

#endif
