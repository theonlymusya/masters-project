#pragma once

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>
#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_CYAN "\033[36m"
#define COLOR_MAGENTA "\033[35m"

enum class InstructionType { ASSIGNMENT, FOR_LOOP, IF_STATEMENT, BLOCK, MAIN_FUNC, PROGRAM };

struct VarInfo {
    std::string type;
    std::optional<std::string> value;
    bool isArray;
    int dim = 0;
    std::vector<std::string> dimSizes;
};

// Предварительное объявление
struct Instruction;

struct ScopedBlock {
    std::vector<Instruction> instructions;
    std::unordered_map<std::string, VarInfo> localScope;
};

struct LoopItersInfo {
    std::string startValue;
    std::string updateValue;
};

struct LoopInfo {
    std::unordered_map<std::string, LoopItersInfo> varNames;
    std::string condition;
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

struct IndexedVariable {
    std::string name;
    std::vector<std::string> indices;
};

struct AssignmentInfo {
    IndexedVariable leftVar;
    std::vector<IndexedVariable> rightVars;
    std::string value;
};

struct Instruction {
    InstructionType type;
    std::variant<AssignmentInfo,  // ASSIGNMENT
                 LoopInfo,        // FOR_LOOP
                 IfStatement,     // IF
                 ScopedBlock      // BLOCK, MAIN_FUNC, PROGRAM
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
    // void pushScope();
    // void popScope();

    // Выполнение инструкций (демонстрация обработки)
    void executeInstructions() const;

    // печатка
    void printAST() const;
    void printInstructionList(const std::vector<Instruction>& instrs, int indent) const;
    void printScope(const std::unordered_map<std::string, VarInfo>& scope, int indent) const;
    void printAssignment(const Instruction& instr, int indent) const;
    void printForLoop(const Instruction& instr, int indent) const;
    void printIfStatement(const Instruction& instr, int indent) const;
    void printBlock(const Instruction& instr, int indent) const;

   private:
    // Глобальный список инструкций (топ-левел блок)
    std::vector<Instruction> instructions;

    // Стек таблиц символов для областей видимости
    std::vector<std::unordered_map<std::string, VarInfo>> scopes;

    // Вспомогательные методы для исполнения инструкций
    void executeInstructionList(const std::vector<Instruction>& instrs) const;
    void executeLoop(const LoopInfo& loop) const;
    void executeIfStatement(const IfStatement& ifStmt) const;
    // std::string expandVariables(const std::string& expr,
    //                             const std::unordered_map<std::string, int>& loopVars) const;
};
