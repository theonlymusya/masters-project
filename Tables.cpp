#include "Tables.hpp"

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

std::vector<std::shared_ptr<MetaNode>>& Observer::getProgramTreeRoots() {
    return programTreeRoots;
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
