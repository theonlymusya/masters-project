// ASTContext.hpp
#ifndef AST_CONTEXT_HPP
#define AST_CONTEXT_HPP

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

class ASTContext {
   public:
    struct VariableInfo {
        std::string type;
        std::optional<std::string> value;
    };

    struct LoopInfo {
        std::string varName;
        std::string start, end, step;
        std::vector<std::variant<std::string, LoopInfo>> body;
    };

    struct IfCondition {
        std::string condition;
        std::vector<std::string> body;
    };

    enum class InstructionType { VAR_DECL, ASSIGNMENT, FOR_LOOP, IF_STATEMENT };

    struct Instruction {
        InstructionType type;
        std::variant<std::string, LoopInfo, IfCondition> data;
    };

    std::unordered_map<std::string, VariableInfo> symbolTable;
    std::vector<Instruction> instructions;

    void addVariable(const std::string& name,
                     const std::string& type,
                     const std::optional<std::string>& value,
                     bool is_array,
                     int array_size = 0);
    void addExpression(const std::string& expr);
    void addLoop(const std::string& varName,
                 const std::string& start,
                 const std::string& end,
                 const std::string& step,
                 std::vector<std::variant<std::string, LoopInfo>> body);
    void addIfCondition(const std::string& condition, std::vector<std::string> body);
    void executeInstructions() const;

   private:
    void executeInstructionList(const std::vector<Instruction>& instrs,
                                std::unordered_map<std::string, int> loopVars) const;
    void executeLoop(const LoopInfo& loop, std::unordered_map<std::string, int> loopVars) const;
    void executeIfCondition(const IfCondition& ifCond, std::unordered_map<std::string, int> loopVars) const;
    std::string expandVariables(const std::string& expr,
                                const std::unordered_map<std::string, int>& loopVars) const;
};

#endif  // AST_CONTEXT_HPP
