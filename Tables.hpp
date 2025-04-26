#pragma once
#include <map>
#include <string>
#include <vector>

struct Src {
    int tableIdx;
    std::vector<int> srcTableIters;
};

struct TableRow {
    int scheduleIdx;
    std::vector<int> iters;                   // значения i, j, k, ... (типа строка)
    std::vector<int> LHSVarIdx;               // типа столбец
    std::vector<std::vector<int>> RHSVarIdx;  // индексные выражения переменных справа (типа элементы)
    std::vector<Src> sources;                 // источники значений справа от "="
};

class Table {
   public:
    // каждая таблица соответствует оператору присваивания
    // каждая таблица ассоциирована с переменной
    std::string targetVar;
    int tableId;
    int dim;

    std::vector<TableRow> rows;

    Table(std::string _var, int _id, int _dim) : targetVar(std::move(_var)), tableId(_id), dim(_dim) {}

    const TableRow* getRowByScheduleIndex(int scheduleIdx) const {
        for (const auto& row : rows) {
            if (row.scheduleIdx == scheduleIdx)
                return &row;
        }
        return nullptr;
    }
};

class Schedule {
   public:
    std::vector<std::shared_ptr<Table>> tables;

    void addTable(const std::shared_ptr<Table>& table) { tables.push_back(table); }
};

struct MetaNode {
    enum class NodeType { ForLoop, Assignment };

    NodeType type;
    int id;
    std::vector<std::shared_ptr<MetaNode>> children;

    MetaNode(NodeType t, int identifier) : type(t), id(identifier) {}
};

class Observer {
   public:
    std::unordered_map<std::string, Schedule> LHVars_Schedule;

    bool hasTableForAssignment(int id) const;
    std::shared_ptr<Table> getTableByAssignmentId(int assignmentId) const;

    std::vector<std::shared_ptr<MetaNode>>& getProgramTreeRoots();

    const std::map<int, std::shared_ptr<Table>>& getAllTables() const;

    void registerTableForVar(const std::string& var_name, std::shared_ptr<Table> table);

    int nextScheduleIndexForVar(const std::string& varName) { return ++scheduleCounters[varName]; }

    std::optional<Src> findLatestSrc(const std::string& varName, const std::vector<int>& rhsIndices) const;

   private:
    // каждая таблица соответствует оператору присваивания
    std::map<int, std::shared_ptr<Table>> AssignmentId_Table;
    // varName → lastScheduleIdx
    std::unordered_map<std::string, int> scheduleCounters;
    std::vector<std::shared_ptr<MetaNode>> programTreeRoots;
};
