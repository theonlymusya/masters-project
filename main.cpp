#include <fstream>
#include <iostream>
#include <sstream>  // Добавлен для корректной работы с файлами
#include <string>
// #include "ASTBuilder.hpp"
#include "ASTPrinter.hpp"
#include "antlr4-runtime.h"
#include "small_c_grammarLexer.h"
#include "small_c_grammarParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    // Открываем входной файл
    std::ifstream stream(argv[1]);
    if (!stream) {
        std::cerr << "Error opening file: " << argv[1] << std::endl;
        return 1;
    }

    // Загружаем содержимое файла в строку (чтобы работало с ANTLRInputStream)
    std::ostringstream buffer;
    buffer << stream.rdbuf();
    ANTLRInputStream input(buffer.str());

    // Создаём лексер, парсер и дерево
    small_c_grammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    small_c_grammarParser parser(&tokens);
    tree::ParseTree* tree = parser.program();

    // Используем наш ASTPrinter
    ASTPrinter printer;
    printer.visit(tree);

    // Выводим AST (ANTLR4)
    std::cout << "\n=== AST, сгенерированное ANTLR4 ===\n";
    std::cout << tree->toStringTree(&parser) << std::endl;

    // Создаём ASTBuilder и строим ASTContext
    // ASTBuilder builder;
    // tree::ParseTreeWalker::DEFAULT.walk(&builder, tree);
    // ASTContext context;

    // // Выполняем код из ASTContext
    // std::cout << "\n=== Развернутое выполнение кода ===\n";
    // builder.context.executeInstructions();

    return 0;
}
