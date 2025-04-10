#pragma once

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>
#include "CalcExpr.hpp"
#include "ContextStructs.hpp"

class ASTContext {
   public:
    using iterValType = int;
    ASTContext();

    void addProgram(const ScopedBlock& block);
    void executeInstructions();
    std::vector<Instruction>& get_instr() { return instructions; }

    void pushScope(const std::unordered_map<std::string, VarInfo>& scope);
    void popScope();
    std::unordered_map<std::string, VarInfo> getAllVisibleVars() const;
    std::unordered_map<std::string, VarInfo*> getAllVisibleVarsForChanges();
    std::unordered_map<std::string, VarInfo*> getLocalVarsForChanges();

   private:
    std::vector<Instruction> instructions;

    std::vector<std::unordered_map<std::string, VarInfo>> scopeStack;

    void executeInstructionList(const std::vector<Instruction>& instrs);
    void executeLoop(const LoopInfo& loop);
    void executeIfStatement(const IfStatement& ifStmt) const;
    void executeAssignment(const AssignmentInfo& info);
};
