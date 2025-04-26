#include "AlgoGenerator.hpp"
#include <sstream>
#include "IteratorNamer.hpp"

AlgoGenerator::AlgoGenerator(const Observer& obs) : observer(obs) {}

AlgoInfo AlgoGenerator::generate() {
    AlgoInfo algo;
    const auto& allTables = observer.getAllTables();

    for (const auto& [assignmentId, tablePtr] : allTables) {
        if (!tablePtr)
            continue;
        processTable(tablePtr, algo);
    }

    return algo;
}

void AlgoGenerator::processTable(const std::shared_ptr<Table>& table, AlgoInfo& algo) {
    bool hasDeps = false;
    for (const auto& row : table->rows) {
        if (!row.sources.empty()) {
            hasDeps = true;
            break;
        }
    }
    if (!hasDeps)
        return;

    Block block(std::to_string(table->tableId), std::to_string(table->dim));

    auto args = generateArgsFromTable(*table);
    for (const auto& arg : args) {
        block.addArg(arg);
    }

    for (const auto& row : table->rows) {
        processRow(row, block);
    }

    algo.addBlock(block);
}

void AlgoGenerator::processRow(const TableRow& row, Block& block) {
    IteratorNamer namer;

    std::ostringstream condition;
    for (size_t idx = 0; idx < row.iters.size(); ++idx) {
        if (idx > 0)
            condition << " and ";
        condition << namer.next() << " == " << row.iters[idx];
    }

    Vertex vertex(condition.str(), "1");

    for (const auto& src : row.sources) {
        std::vector<std::string> bsrcVec;
        std::vector<std::string> srcVec;

        // bsrc = просто tableIdx
        bsrcVec.push_back(std::to_string(src.tableIdx));

        // src = список координат
        for (int val : src.srcTableIters) {
            srcVec.push_back(std::to_string(val));
        }

        vertex.addDependency(InEdge(bsrcVec, srcVec));
    }

    block.addVertex(vertex);
}

std::vector<Arg> AlgoGenerator::generateArgsFromTable(const Table& table) {
    if (table.rows.empty())
        return {};

    size_t dims = table.rows.front().iters.size();
    std::vector<int> minVals(dims, std::numeric_limits<int>::max());
    std::vector<int> maxVals(dims, std::numeric_limits<int>::min());

    for (const auto& row : table.rows) {
        for (size_t i = 0; i < dims; ++i) {
            minVals[i] = std::min(minVals[i], row.iters[i]);
            maxVals[i] = std::max(maxVals[i], row.iters[i]);
        }
    }

    IteratorNamer namer;
    std::vector<Arg> args;

    for (size_t i = 0; i < dims; ++i) {
        std::string varName = namer.next();
        std::string range = std::to_string(minVals[i]) + ".." + std::to_string(maxVals[i]);
        args.emplace_back(varName, range);
    }

    return args;
}
