#include <fstream>
#include <iostream>
#include <string>
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

    // Создаём лексер, парсер и дерево
    ANTLRInputStream input(stream);
    small_c_grammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    small_c_grammarParser parser(&tokens);
    tree::ParseTree* tree = parser.program();

    // Используем наш ASTPrinter
    ASTPrinter printer;
    printer.visit(tree);

    return 0;
}
