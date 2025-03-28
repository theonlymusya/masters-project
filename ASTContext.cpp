// ASTContext.cpp
#include "ASTContext.hpp"
#include <cstdlib>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <unordered_map>
// #include "exprtk.hpp"

// double evaluateExpression(const std::string& expr, const std::unordered_map<std::string, double>&
// variables) {
//     typedef exprtk::symbol_table<double> symbol_table_t;
//     typedef exprtk::expression<double> expression_t;
//     typedef exprtk::parser<double> parser_t;

//     symbol_table_t symbol_table;

//     // локальное копирование, т.к. exprtk требует неконстантные double&
//     std::unordered_map<std::string, double> variableCopies = variables;

//     for (auto& [name, value] : variableCopies) {
//         symbol_table.add_variable(name, value);
//     }

//     expression_t expression;
//     expression.register_symbol_table(symbol_table);

//     parser_t parser;
//     if (!parser.compile(expr, expression)) {
//         // Соберём подробное сообщение об ошибке
//         std::ostringstream oss;
//         oss << "[ExprTk ERROR] Не удалось разобрать выражение: '" << expr << "'\n";
//         oss << "Причина: " << parser.error() << "\n";

//         // Выведем информацию по каждой ошибке парсера (если есть)
//         for (std::size_t i = 0; i < parser.error_count(); ++i) {
//             exprtk::parser_error::type error = parser.get_error(i);
//             oss << "  [" << i << "] " << error.diagnostic << " @ " << error.token.position << " near '"
//                 << error.token.value << "'\n";
//         }

//         // Бросим исключение с подробностями
//         throw std::runtime_error(oss.str());
//     }

//     return expression.value();
// }

ASTContext::ASTContext() {
    // Инициализируем глобальную область видимости
    pushScope();
}

void ASTContext::pushScope() {
    scopes.push_back({});
}

void ASTContext::popScope() {
    if (!scopes.empty()) {
        scopes.pop_back();
    }
}

void ASTContext::addVariable(const std::string& name,
                             const std::string& type,
                             const std::optional<std::string>& value,
                             bool isArray,
                             const std::vector<int>& dimensions) {
    if (scopes.empty()) {
        pushScope();
    }

    scopes.back()[name] = VarInfo{.type = type, .value = value, .isArray = isArray, .dimensions = dimensions};
}

void ASTContext::addAssignment(const std::string& expr) {
    instructions.push_back({InstructionType::ASSIGNMENT, expr});
}

void ASTContext::addLoop(const std::string& varName,
                         const std::string& start,
                         const std::string& end,
                         const std::string& step,
                         const std::vector<Instruction>& body) {
    instructions.push_back({InstructionType::FOR_LOOP, LoopInfo{varName, start, end, step, body}});
}

void ASTContext::addIfStatement(const IfStatement& ifStmt) {
    instructions.push_back({InstructionType::IF_STATEMENT, ifStmt});
}

void ASTContext::addBlock(const std::vector<Instruction>& block) {
    instructions.push_back({InstructionType::BLOCK, block});
}

void ASTContext::executeInstructions() const {
    executeInstructionList(instructions, {});
}

void ASTContext::executeInstructionList(const std::vector<Instruction>& instrs,
                                        std::unordered_map<std::string, int> loopVars) const {
    for (const auto& instr : instrs) {
        switch (instr.type) {
            case InstructionType::ASSIGNMENT:
                std::cout << expandVariables(std::get<std::string>(instr.data), loopVars) << "\n";
                break;
            case InstructionType::FOR_LOOP:
                executeLoop(std::get<LoopInfo>(instr.data), loopVars);
                break;
            case InstructionType::IF_STATEMENT:
                executeIfStatement(std::get<IfStatement>(instr.data), loopVars);
                break;
            case InstructionType::BLOCK: {
                const auto& block = std::get<std::vector<Instruction>>(instr.data);
                executeInstructionList(block, loopVars);
                break;
            }
        }
    }
}

void ASTContext::executeLoop(const LoopInfo& loop, std::unordered_map<std::string, int> loopVars) const {
    int start = std::stoi(loop.start);
    int end = std::stoi(loop.end);
    int step = std::stoi(loop.step);

    for (int i = start; i < end; i += step) {
        loopVars[loop.varName] = i;
        executeInstructionList(loop.body, loopVars);
    }
}

void ASTContext::executeIfStatement(const IfStatement& ifStmt,
                                    std::unordered_map<std::string, int> loopVars) const {
    // Для демонстрации считаем, что условие – число, отличное от 0 означает true.
    int condValue = std::stoi(expandVariables(ifStmt.condition, loopVars));
    if (condValue) {
        executeInstructionList(ifStmt.thenBlock, loopVars);
    } else {
        bool executedElseIf = false;
        for (const auto& branch : ifStmt.elseIfBranches) {
            int elifVal = std::stoi(expandVariables(branch.condition, loopVars));
            if (elifVal) {
                executeInstructionList(branch.block, loopVars);
                executedElseIf = true;
                break;
            }
        }
        if (!executedElseIf && !ifStmt.elseBlock.empty()) {
            executeInstructionList(ifStmt.elseBlock, loopVars);
        }
    }
}

std::string ASTContext::expandVariables(const std::string& expr,
                                        const std::unordered_map<std::string, int>& loopVars) const {
    std::string result = expr;
    for (const auto& [var, val] : loopVars) {
        size_t pos = 0;
        std::string varPattern = var;
        std::string valStr = std::to_string(val);
        while ((pos = result.find(varPattern, pos)) != std::string::npos) {
            result.replace(pos, varPattern.size(), valStr);
            pos += valStr.size();
        }
    }
    return result;
}

void ASTContext::printAST() const {
    std::cout << "AST Structure:\n";
    printInstructionList(instructions, 0);
}

void ASTContext::printInstructionList(const std::vector<Instruction>& instrs, int indent) const {
    std::string ind(indent * 2, ' ');

    for (const auto& instr : instrs) {
        switch (instr.type) {
            case InstructionType::ASSIGNMENT:
                if (!std::holds_alternative<std::string>(instr.data)) {
                    std::cout << ind << "ASSIGNMENT: [ОШИБКА: data не string!]\n";
                } else {
                    auto& text = std::get<std::string>(instr.data);
                    if (text.empty()) {
                        std::cout << ind << "ASSIGNMENT: [ПУСТАЯ СТРОКА]\n";
                    } else {
                        std::cout << ind << "ASSIGNMENT: " << text << "\n";
                    }
                }
                break;

            case InstructionType::BLOCK: {
                std::cout << ind << "BLOCK:\n";
                const auto& block = std::get<std::vector<Instruction>>(instr.data);
                printInstructionList(block, indent + 1);
                break;
            }

            case InstructionType::FOR_LOOP: {
                const auto& loop = std::get<LoopInfo>(instr.data);
                std::cout << ind << "FOR_LOOP: " << loop.varName << " = " << loop.start << "; to " << loop.end
                          << "; step " << loop.step << "\n";
                printInstructionList(loop.body, indent + 1);
                break;
            }

            case InstructionType::IF_STATEMENT: {
                const auto& ifStmt = std::get<IfStatement>(instr.data);
                std::cout << ind << "IF: (" << ifStmt.condition << ")\n";
                printInstructionList(ifStmt.thenBlock, indent + 1);

                for (const auto& elif : ifStmt.elseIfBranches) {
                    std::cout << ind << "ELSE IF: (" << elif.condition << ")\n";
                    printInstructionList(elif.block, indent + 1);
                }

                if (!ifStmt.elseBlock.empty()) {
                    std::cout << ind << "ELSE:\n";
                    printInstructionList(ifStmt.elseBlock, indent + 1);
                }
                break;
            }
        }
    }
}
