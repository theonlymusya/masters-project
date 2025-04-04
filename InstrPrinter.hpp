#pragma once
#include "ASTContext.hpp"
#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_CYAN "\033[36m"
#define COLOR_MAGENTA "\033[35m"

class InstructionsPrinter {
   public:
    void printAST(const std::vector<Instruction>& instrs) const;
    void printInstructionList(const std::vector<Instruction>& instrs, int indent) const;
    void printScope(const std::unordered_map<std::string, VarInfo>& scope, int indent) const;
    void printAssignment(const Instruction& instr, int indent) const;
    void printForLoop(const Instruction& instr, int indent) const;
    void printIfStatement(const Instruction& instr, int indent) const;
    void printBlock(const Instruction& instr, int indent) const;

   private:
};