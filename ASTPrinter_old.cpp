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

std::any ASTPrinter::visitAssignmentOp(small_c_grammarParser::AssignmentOpContext* ctx) {
    printIndent();
    std::cout << "AssignmentOp: ";
    if (ctx->declaration())
        std::cout << ctx->declaration()->getText() << " ";
    std::cout << ctx->varName()->getText();
    if (ctx->mathExpr()) {
        std::cout << " = " << ctx->mathExpr()->getText();
    }
    std::cout << std::endl;
    return nullptr;
}

std::any ASTPrinter::visitIfStatement(small_c_grammarParser::IfStatementContext* ctx) {
    printIndent();
    std::cout << "If condition: " << ctx->cond->getText() << std::endl;
    indent++;
    visit(ctx->statement());  // then-блок
    indent--;

    // Обработка цепочки else if
    if (ctx->elifChain()) {
        auto conds = ctx->elifChain()->elifCond;
        auto stmts = ctx->elifChain()->statement();
        for (size_t i = 0; i < conds.size(); ++i) {
            printIndent();
            std::cout << "Else if condition: " << conds[i]->getText() << std::endl;
            indent++;
            visit(stmts[i]);  // statement по индексу
            indent--;
        }
    }

    // Обработка else
    if (ctx->elseBranch()) {
        printIndent();
        std::cout << "Else:" << std::endl;
        indent++;
        visit(ctx->elseBranch()->statement());
        indent--;
    }
    return nullptr;
}

std::any ASTPrinter::visitForStatement(small_c_grammarParser::ForStatementContext* ctx) {
    printIndent();
    std::cout << "For loop:" << std::endl;
    indent++;

    // printIndent();
    // std::cout << "Initialization: ";
    // if (ctx->forStart()->assignmentOp()->declaration())
    //     std::cout << ctx->forStart()->assignmentOp()->declaration()->getText() << " ";
    // std::cout << ctx->forStart()->assignmentOp()->varName()->getText();
    // if (ctx->forStart()->assignmentOp()->mathExpr()) {
    //     std::cout << " = " << ctx->forStart()->assignmentOp()->mathExpr()->getText();
    // }
    // std::cout << std::endl;

    printIndent();
    std::cout << "Condition: " << ctx->forStop()->getText() << " " << std::endl;

    // printIndent();
    // std::cout << "Updation: ";
    // if (ctx->forStep()->incDecOp()) {
    //     std::cout << ctx->forStep()->incDecOp()->getText() << ::std::endl;
    // } else if (ctx->forStep()->mathExpr()) {
    //     std::cout << "Increment: " << ctx->forStep()->ID()->getText() << " "
    //               << ctx->forStep()->children[1]->getText() << " " << ctx->forStep()->mathExpr()->getText()
    //               << std::endl;
    // } else {
    //     std::cout << "Increment: " << ctx->forStep()->ID()->getText() << " "
    //               << ctx->forStep()->children[1]->getText() << std::endl;
    // }

    visit(ctx->statement());
    indent--;
    return nullptr;
}
