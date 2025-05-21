#pragma once

#include <memory>
#include "ASTContext.hpp"
#include "AlgoInfo.hpp"
#include "IteratorNamer.hpp"
#include "Tables.hpp"

class AlgoGenerator {
   public:
    AlgoGenerator(const Observer& obs, const ASTContext& ast);

    AlgoInfo generate();

   private:
    const Observer& observer;
    const ASTContext& astContext;
    int nextBlockId = 1;
    std::unordered_map<int, std::vector<int>> tableIdToBlockPath;
    std::vector<int> currentBlockPath;
    Block* currentLoopBlock = nullptr;
    Block* currentAssignmentBlock = nullptr;

    void markNeededTables();
    void buildAlgoFromInstruction(const Instruction& instr, AlgoInfo& algo, IteratorNamer& namer);
    void buildAlgoFromInstructions(const std::vector<Instruction>& instrs,
                                   Block& currentBlock,
                                   IteratorNamer& namer);

    void processRow(const TableRow& row, Block& block, IteratorNamer& namer);
    // std::vector<Arg> generateArgsFromTable(const Table& table, IteratorNamer& namer);
};
