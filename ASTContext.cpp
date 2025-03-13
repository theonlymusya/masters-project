#include "ASTContext.hpp"

void ASTContext::addVariable(const std::string& name,
                             const std::string& type,
                             const std::optional<std::string>& value,
                             bool is_array,
                             int array_size = 0) {
    symbolTable[name] = {type, value};
}

void ASTContext::addExpression(const std::string& expr) {
    instructions.push_back({InstructionType::ASSIGNMENT, expr});
}

void ASTContext::addLoop(const std::string& varName,
                         const std::string& start,
                         const std::string& end,
                         const std::string& step,
                         std::vector<std::variant<std::string, LoopInfo>> body) {
    instructions.push_back({InstructionType::FOR_LOOP, LoopInfo{varName, start, end, step, body}});
}

void ASTContext::addIfCondition(const std::string& condition, std::vector<std::string> body) {
    instructions.push_back({InstructionType::IF_STATEMENT, IfCondition{condition, body}});
}

void ASTContext::executeInstructions() const {
    executeInstructionList(instructions, {});
}

void ASTContext::executeInstructionList(const std::vector<Instruction>& instrs,
                                        std::unordered_map<std::string, int> loopVars) const {
    for (const auto& instr : instrs) {
        if (instr.type == InstructionType::ASSIGNMENT) {
            std::cout << expandVariables(std::get<std::string>(instr.data), loopVars) << "\n";
        } else if (instr.type == InstructionType::FOR_LOOP) {
            executeLoop(std::get<LoopInfo>(instr.data), loopVars);
        } else if (instr.type == InstructionType::IF_STATEMENT) {
            executeIfCondition(std::get<IfCondition>(instr.data), loopVars);
        }
    }
}

void ASTContext::executeLoop(const LoopInfo& loop, std::unordered_map<std::string, int> loopVars) const {
    int start = std::stoi(loop.start);
    int end = std::stoi(loop.end);
    int step = std::stoi(loop.step);

    for (int i = start; i < end; i += step) {
        loopVars[loop.varName] = i;
        for (const auto& stmt : loop.body) {
            if (std::holds_alternative<std::string>(stmt)) {
                std::cout << expandVariables(std::get<std::string>(stmt), loopVars) << "\n";
            } else {
                executeLoop(std::get<LoopInfo>(stmt), loopVars);
            }
        }
    }
}

void ASTContext::executeIfCondition(const IfCondition& ifCond,
                                    std::unordered_map<std::string, int> loopVars) const {
    std::cout << "if (" << expandVariables(ifCond.condition, loopVars) << ") {\n";
    for (const auto& stmt : ifCond.body) {
        std::cout << "  " << expandVariables(stmt, loopVars) << "\n";
    }
    std::cout << "}\n";
}

std::string ASTContext::expandVariables(const std::string& expr,
                                        const std::unordered_map<std::string, int>& loopVars) const {
    std::string result = expr;
    for (const auto& [var, val] : loopVars) {
        std::string varPattern = var;
        std::string valStr = std::to_string(val);
        size_t pos;
        while ((pos = result.find(varPattern)) != std::string::npos) {
            result.replace(pos, varPattern.size(), valStr);
        }
    }
    return result;
}
