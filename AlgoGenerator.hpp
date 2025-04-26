#pragma once
#include "AlgoInfo.hpp"
#include "Tables.hpp"

class AlgoGenerator {
   public:
    AlgoGenerator(const Observer& obs);

    AlgoInfo generate();

   private:
    const Observer& observer;
    int blockIdCounter = 0;

    void processTable(const std::shared_ptr<Table>& table, AlgoInfo& algo);
    void processRow(const TableRow& row, Block& block);
    std::vector<Arg> generateArgsFromTable(const Table& table);
};
