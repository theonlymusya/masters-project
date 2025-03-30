#pragma once

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

enum class InstructionType { ASSIGNMENT, FOR_LOOP, IF_STATEMENT, BLOCK, MAIN_FUNC, PROGRAM };

struct VarInfo {
    std::string type;
    std::optional<std::string> value;
    bool isArray;
    int arraySize;
    std::vector<int> dimensions;
};

// Предварительное объявление
struct Instruction;

struct ScopedBlock {
    std::vector<Instruction> instructions;
    std::unordered_map<std::string, VarInfo> localScope;
};

struct LoopInfo {
    std::string varName;
    std::string start;
    std::string end;
    std::string step;
    ScopedBlock body;
};

struct ElseIfStatement {
    std::string condition;
    ScopedBlock block;
};

struct IfStatement {
    std::string condition;
    ScopedBlock thenBlock;
    std::vector<ElseIfStatement> elseIfBranches;
    ScopedBlock elseBlock;
};

struct Instruction {
    InstructionType type;
    std::variant<std::string,  // ASSIGNMENT
                 LoopInfo,     // FOR_LOOP
                 IfStatement,  // IF
                 ScopedBlock   // BLOCK, MAIN_FUNC, PROGRAM
                 >
        data;
};

class ASTContext {
   public:
    ASTContext();

    // Методы для добавления инструкций в текущий (верхнеуровневый) блок
    void addVariable(const std::string& name,
                     const std::string& type,
                     const std::optional<std::string>& value,
                     bool isArray,
                     const std::vector<int>& dimensions);
    void addAssignment(const std::string& expr);
    // void ASTContext::addLoop(const std::string& varName,
    //                          const std::string& start,
    //                          const std::string& end,
    //                          const std::string& step,
    //                          const ScopedBlock& body);
    // void addIfStatement(const IfStatement& ifStmt);
    void addProgram(const ScopedBlock& program);
    void addInstruction(const Instruction& instr);
    std::unordered_map<std::string, VarInfo> getCurrentScope() const;

    // Управление областями видимости: создание и удаление scope
    void pushScope();
    void popScope();

    // Выполнение инструкций (демонстрация обработки)
    void executeInstructions() const;

    // печатка
    void printAST() const;
    void printInstructionList(const std::vector<Instruction>& instrs, int indent) const;

   private:
    // Глобальный список инструкций (топ-левел блок)
    std::vector<Instruction> instructions;

    // Стек таблиц символов для областей видимости
    std::vector<std::unordered_map<std::string, VarInfo>> scopes;

    // Вспомогательные методы для исполнения инструкций
    void executeInstructionList(const std::vector<Instruction>& instrs,
                                std::unordered_map<std::string, int> loopVars) const;
    void executeLoop(const LoopInfo& loop, std::unordered_map<std::string, int> loopVars) const;
    void executeIfStatement(const IfStatement& ifStmt, std::unordered_map<std::string, int> loopVars) const;
    std::string expandVariables(const std::string& expr,
                                const std::unordered_map<std::string, int>& loopVars) const;
};
