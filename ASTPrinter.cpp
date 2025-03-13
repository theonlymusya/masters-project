#include "ASTPrinter.hpp"
#include "small_c_grammarParser.h"

std::any ASTPrinter::visitProgram(small_c_grammarParser::ProgramContext* ctx) {
    std::cout << "Program:" << std::endl;
    return visitChildren(ctx);
}

std::any ASTPrinter::visitFunction(small_c_grammarParser::FunctionContext* ctx) {
    printIndent();
    std::cout << "Function: main" << std::endl;
    indent++;
    visitChildren(ctx);
    indent--;
    return nullptr;
}

std::any ASTPrinter::visitVarDeclaration(small_c_grammarParser::VarDeclarationContext* ctx) {
    printIndent();
    std::cout << "VarDeclaration: " << ctx->ID()->getText();
    if (ctx->math_expr()) {
        std::cout << " = " << ctx->math_expr()->getText();
    }
    std::cout << std::endl;
    return nullptr;
}

std::any ASTPrinter::visitIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    printIndent();
    std::cout << "If condition: " << ctx->math_expr()->getText() << std::endl;
    indent++;
    visit(ctx->statement(0));
    if (ctx->statement().size() > 1) {
        printIndent();
        std::cout << "Else:" << std::endl;
        indent++;
        visit(ctx->statement(1));
        indent--;
    }
    indent--;
    return nullptr;
}

std::any ASTPrinter::visitForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    printIndent();
    std::cout << "For loop:" << std::endl;
    indent++;

    printIndent();
    std::cout << "Initialization: " << ctx->forStart()->varDeclaration()->getText() << std::endl;

    printIndent();
    std::cout << "Condition: " << ctx->forStop()->ID()->getText() << " "
              << ctx->forStop()->children[1]->getText() << " " << ctx->forStop()->math_expr()->getText()
              << std::endl;

    printIndent();
    if (ctx->forStep()->math_expr()) {
        std::cout << "Increment: " << ctx->forStep()->ID()->getText() << " "
                  << ctx->forStep()->children[1]->getText() << " " << ctx->forStep()->math_expr()->getText()
                  << std::endl;
    } else {
        std::cout << "Increment: " << ctx->forStep()->ID()->getText() << " "
                  << ctx->forStep()->children[1]->getText() << std::endl;
    }

    visit(ctx->statement());
    indent--;
    return nullptr;
}
