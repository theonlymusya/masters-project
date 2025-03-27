// ASTContext.hpp
#ifndef ASTCONTEXT_HPP
#define ASTCONTEXT_HPP

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

// Типы инструкций, которые будут храниться в AST
enum class InstructionType { ASSIGNMENT, FOR_LOOP, IF_STATEMENT, BLOCK };

// Информация о переменной (с учётом области видимости)
struct SymbolInfo {
    std::string type;
    std::optional<std::string> value;
    bool isArray;
    int arraySize;
};

// Вперед объявляем структуры, используемые для представления инструкций
struct LoopInfo;
struct IfStatement;

// Единичная инструкция представлена как тип и данные, хранимые в std::variant
struct Instruction {
    InstructionType type;
    std::variant<std::string, LoopInfo, IfStatement, std::vector<Instruction>> data;
};

// Структура для представления цикла for
struct LoopInfo {
    std::string varName;
    std::string start;
    std::string end;
    std::string step;
    std::vector<Instruction> body;  // тело цикла – список инструкций
};

// Структура для представления конструкции if с поддержкой else-if и else
struct IfStatement {
    std::string condition;               // условие if
    std::vector<Instruction> thenBlock;  // блок инструкций для if
    // Вектор для веток else-if: каждая пара содержит условие и соответствующий блок
    std::vector<std::pair<std::string, std::vector<Instruction>>> elseIfBranches;
    std::vector<Instruction> elseBlock;  // блок инструкций для else (если есть)
};

class ASTContext {
   public:
    ASTContext();

    // Методы для добавления инструкций в текущий (верхнеуровневый) блок
    void addVariable(const std::string& name,
                     const std::string& type,
                     const std::optional<std::string>& value,
                     bool isArray,
                     int arraySize = 0);
    void addAssignment(const std::string& expr);
    void addLoop(const std::string& varName,
                 const std::string& start,
                 const std::string& end,
                 const std::string& step,
                 const std::vector<Instruction>& body);
    void addIfStatement(const IfStatement& ifStmt);
    void addBlock(const std::vector<Instruction>& block);

    // Управление областями видимости: создание и удаление scope
    void pushScope();
    void popScope();

    // Выполнение инструкций (демонстрация обработки)
    void executeInstructions() const;

   private:
    // Глобальный список инструкций (топ-левел блок)
    std::vector<Instruction> instructions;

    // Стек таблиц символов для областей видимости
    std::vector<std::unordered_map<std::string, SymbolInfo>> scopes;

    // Вспомогательные методы для исполнения инструкций
    void executeInstructionList(const std::vector<Instruction>& instrs,
                                std::unordered_map<std::string, int> loopVars) const;
    void executeLoop(const LoopInfo& loop, std::unordered_map<std::string, int> loopVars) const;
    void executeIfStatement(const IfStatement& ifStmt, std::unordered_map<std::string, int> loopVars) const;
    std::string expandVariables(const std::string& expr,
                                const std::unordered_map<std::string, int>& loopVars) const;
};

#endif  // ASTCONTEXT_HPP
