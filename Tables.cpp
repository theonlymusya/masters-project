#include "Tables.hpp"
#include <iostream>

bool Observer::hasTableForAssignment(int id) const {
    return AssignmentId_Table.count(id) > 0;
}

void Observer::registerTableForVar(const std::string& var_name, std::shared_ptr<Table> table) {
    LHVars_Schedule[var_name].addTable(table);
    AssignmentId_Table[table->tableId] = table;
}

std::shared_ptr<Table> Observer::getTableByAssignmentId(int assignmentId) const {
    auto it = AssignmentId_Table.find(assignmentId);
    if (it != AssignmentId_Table.end()) {
        return it->second;
    }
    return nullptr;
}

const std::vector<std::shared_ptr<MetaNode>>& Observer::getProgramTreeRoots() const {
    return programTreeRoots;
}

std::vector<std::shared_ptr<MetaNode>>& Observer::getProgramTreeRootsNonConst() {
    return programTreeRoots;
}

void Observer::addLoopMeta(const LoopMetaInfo& metaInfo) {
    loopsInfo[metaInfo.loopId] = metaInfo;
}

const LoopMetaInfo& Observer::getLoopMeta(int loopId) const {
    auto it = loopsInfo.find(loopId);
    if (it == loopsInfo.end()) {
        throw std::runtime_error("[FATAL] LoopMetaInfo for loopId=" + std::to_string(loopId) + " not found!");
    }
    return it->second;
}

LoopMetaInfo& Observer::getLoopMetaNonConst(int loopId) {
    auto it = loopsInfo.find(loopId);
    if (it == loopsInfo.end()) {
        throw std::runtime_error("[FATAL] LoopMetaInfo for loopId=" + std::to_string(loopId) + " not found!");
    }
    return it->second;
}

const std::map<int, std::shared_ptr<Table>>& Observer::getAllTables() const {
    return AssignmentId_Table;
}

std::optional<Src> Observer::findLatestSrc(const std::string& varName,
                                           const std::vector<int>& rhsIndices) const {
    auto it = LHVars_Schedule.find(varName);
    if (it == LHVars_Schedule.end())
        return std::nullopt;

    const auto& schedule = it->second;

    // Собираем все строки со ссылкой на таблицу и scheduleIdx
    struct IndexedRow {
        int scheduleIdx;
        int tableIdx;
        const TableRow* row;
    };

    std::vector<IndexedRow> allRows;

    for (size_t tableIdx = 0; tableIdx < schedule.tables.size(); ++tableIdx) {
        const auto& table = schedule.tables[tableIdx];
        for (const auto& row : table->rows) {
            allRows.push_back({row.scheduleIdx, table->tableId, &row});
        }
    }

    // Сортируем по убыванию scheduleIdx
    std::sort(allRows.begin(), allRows.end(),
              [](const IndexedRow& a, const IndexedRow& b) { return a.scheduleIdx > b.scheduleIdx; });

    // Ищем совпадение по LHS
    for (const auto& indexed : allRows) {
        if (indexed.row->LHSVarIdx == rhsIndices) {
            return Src{indexed.tableIdx, indexed.row->iters};
        }
    }

    return std::nullopt;
}

void Observer::debugPrintMetaTree() const {
    for (const auto& root : programTreeRoots) {
        debugPrintMetaNode(root, 0);
    }
}

void Observer::debugPrintMetaNode(const std::shared_ptr<MetaNode>& node, int depth) const {
    std::string indent(depth * 2, ' ');
    if (node->type == MetaNode::NodeType::ForLoop) {
        std::cout << indent << "FOR_LOOP id=" << node->id << "\n";
    } else {
        std::cout << indent << "ASSIGNMENT id=" << node->id << "\n";
    }
    for (const auto& child : node->children) {
        debugPrintMetaNode(child, depth + 1);
    }
}
