// ASTContext.cpp
#include "ASTContext.hpp"
#include <cstdlib>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include "InstrPrinter.hpp"

ASTContext::ASTContext() {
    // Инициализируем глобальную область видимости
    // pushScope();
}

void ASTContext::addProgram(const ScopedBlock& block) {
    instructions.push_back({InstructionType::PROGRAM, block});
}

void ASTContext::pushScope(const std::unordered_map<std::string, VarInfo>& scope) {
    scopeStack.push_back(scope);
}

void ASTContext::popScope() {
    if (!scopeStack.empty()) {
        scopeStack.pop_back();
    } else {
        std::cerr << "[ERROR] Scope stack underflow!\n";
    }
}

std::unordered_map<std::string, VarInfo> ASTContext::getAllVisibleVars() const {
    std::unordered_map<std::string, VarInfo> result;

    for (auto it = scopeStack.rbegin(); it != scopeStack.rend(); ++it) {
        for (const auto& [name, info] : *it) {
            if (info.visible && !result.count(name)) {
                result[name] = info;
            }
        }
    }

    return result;
}

std::unordered_map<std::string, VarInfo*> ASTContext::getAllVisibleVarsForChanges() {
    std::unordered_map<std::string, VarInfo*> result;

    for (auto it = scopeStack.rbegin(); it != scopeStack.rend(); ++it) {
        for (auto& [name, info] : *it) {
            if (info.visible && !result.count(name)) {
                result[name] = &info;
            }
        }
    }

    return result;
}

std::unordered_map<std::string, VarInfo*> ASTContext::getLocalVarsForChanges() {
    if (scopeStack.empty()) {
        throw std::runtime_error("Scope stack is empty");
    }

    std::unordered_map<std::string, VarInfo*> result;

    auto& topScope = scopeStack.back();
    for (auto& [name, info] : topScope) {
        result[name] = &info;
    }

    return result;
}

void ASTContext::executeInstructions() {
    executeInstructionList(instructions);
}

void ASTContext::executeInstructionList(const std::vector<Instruction>& instrs) {
    for (const auto& instr : instrs) {
        switch (instr.type) {
            case InstructionType::ASSIGNMENT: {
                // заполнение таблицы
                executeAssignment(std::get<AssignmentInfo>(instr.data));
                break;
            }
            case InstructionType::FOR_LOOP: {
                executeLoop(std::get<LoopInfo>(instr.data));
                break;
            }
            case InstructionType::IF_STATEMENT: {
                executeIfStatement(std::get<IfStatement>(instr.data));
                break;
            }
            case InstructionType::MAIN_FUNC:
            case InstructionType::PROGRAM:
            case InstructionType::BLOCK: {
                const auto& scoped = std::get<ScopedBlock>(instr.data);
                pushScope(scoped.localScope);
                executeInstructionList(scoped.instructions);
                popScope();
            }
        }
    }
}

// struct ScopedBlock {
//     std::vector<Instruction> instructions;
//     std::unordered_map<std::string, VarInfo> localScope;
// };

// struct LoopItersInfo {
//     std::string startValue;
//     std::string updateValue;
// };

// struct LoopInfo {
//     std::unordered_map<std::string, LoopItersInfo> varNames;
//     std::string condition;
//     ScopedBlock body;
// };

void ASTContext::executeLoop(const LoopInfo& loop) {
    // ПЛАН

    // Предположения на которых работает функция
    // 0.0. Считаем, что ЗНАЧЕНИЯ внешних переменных вычислены
    // 0.1. Считаем, что мы находимся в ScopedBlock цикла for, и там лежат имена переменных-итераторов ТОЛЬКО!
    // если в заголовке они были задекларированы (должно быть так при правильной работе)
    // (в итоге pushScope делаем внутри самой функции)
    // 0.2. Считаем, что мы выходим из ScopedBlock цикла for сразу после выполнения текущей функции
    // 0.3. Делаем переменные из загаловка visible

    // Инициализация стартовых значений
    // 1.0. Выполняем функции getFullScopeForChanges(), получая ссылки на актуальные переменные
    // 1.1. Выполняем функцию getFullScope(), получая константные ссылки на переменные, чтобы превратить их в
    // карту {имя : значение}, чтобы засунуть в функцию для вычислений
    // 1.2. Присваиваем новые стартовые значения из заголовка цикла, если такие есть
    // (int i = 6 или i = 6 в поле инициализации)
    // 1.2. (по идее в случае int i = 6 должна измениться переменная из ScopedBlock цикла for)
    // 1.2. (а в случае i = 6 должна измениться переменная из одного из внешних ScopedBlock)

    // Проверка условия
    // 2.0. Повторно делаем getFullScope для получения актуальных значений переменных
    // 2.1. На их основе выполняем вычисление Condition, и если он равен 0 -> прерываем цикл

    // Выполнение тела цикла
    // 3.0. По идее дальше вызывается executeInstrList без предварительных действий (убедиться в этом?)
    // 3.1. Также мы предполагаем, что все изменения значений переменных, полученные в результате работы тела
    // цикла
    // 3.1. Должны были сохраниться в ScopedBlock цикла for и актуальные значения могут быть получены с
    // помощью getFullScope()

    // Обновление значений итераторов
    // 4.0. Выполняем функцию getFullScope(), получая константные ссылки на переменные
    // 4.1. В цикле идём по всем выражениям update из заголовка цикла
    // 4.2. Используем их для вычисления новых значений update
    // 4.3. Выполняем функции getFullScopeForChanges(), получая ссылки на актуальные переменные
    // 4.4. Обновляем значения итераторов, перечисленных в поле updated цикла for
    // (по идее обновиться должны итераторы из ScopedBlock цикла for если они были задекларированы в заголовки
    // и итераторы из некоторого внешнего ScopedBlock в ином случае)

    pushScope(loop.body.localScope);

    auto localVarsWriteMod = getLocalVarsForChanges();

    for (const auto& [itName, _] : loop.itName_startVal) {
        if (localVarsWriteMod.count(itName)) {
            localVarsWriteMod[itName]->visible = true;
        }
    }

    // 1. Получаем полную текущую область (для вычислений)
    auto visibleVarsWriteMod = getAllVisibleVarsForChanges();
    auto visibleVarsReadMod = getAllVisibleVars();
    auto visibleVarsVal = expr_utils::extractValues(visibleVarsReadMod);

    // 2. Вычисляем стартовые значения итераторов
    for (const auto& [itName, startVal] : loop.itName_startVal) {
        double start = ExpressionCalculator::evaluateWithTinyExpr(startVal, visibleVarsVal);
        //.count = 1, если в map есть ключ varName
        if (visibleVarsWriteMod.count(itName)) {
            auto* var = visibleVarsWriteMod[itName];
            var->value = std::to_string((int)start);
            var->numericVal = start;
        } else {
            std::cerr << "[WARNING] Variable " << itName << " was not found for initialization\n";
        }
    }
    for (;;) {
        // std::cout << "\n--- Новая итерация цикла ---\n";

        visibleVarsReadMod = getAllVisibleVars();
        visibleVarsVal = expr_utils::extractValues(visibleVarsReadMod);
        // InstructionsPrinter::printScope(visibleVarsReadMod);

        // std::cout << "  Условие: " << loop.condition << std::endl;
        double cond = ExpressionCalculator::evaluateWithTinyExpr(loop.condition, visibleVarsVal);
        // std::cout << "  Значение условия: " << cond << "\n";

        if (!cond)
            break;

        // std::cout << "  До: " << "\n";
        // InstructionsPrinter::printScope(visibleVarsReadMod);

        executeInstructionList(loop.body.instructions);
        // std::cout << "  После: " << "\n";

        // 4. Обновление значений итераторов
        visibleVarsReadMod = getAllVisibleVars();
        visibleVarsVal = expr_utils::extractValues(visibleVarsReadMod);
        visibleVarsWriteMod = getAllVisibleVarsForChanges();

        // InstructionsPrinter::printScope(visibleVarsReadMod);

        for (const auto& [itName, updateVal] : loop.itName_updateVal) {
            double updated = ExpressionCalculator::evaluateWithTinyExpr(updateVal, visibleVarsVal);
            // std::cout << "  Обновление " << itName << " = " << updated << "\n";

            if (visibleVarsWriteMod.count(itName)) {
                auto* var = visibleVarsWriteMod[itName];
                var->value = std::to_string((int)updated);
                var->numericVal = updated;
            } else {
                std::cerr << "[WARNING] Variable " << itName << " was not found for updating\n";
            }
        }
    }
    popScope();
}

// struct IndexedVariable {
//     std::string name;
//     std::vector<std::string> indices;
// };

// struct AssignmentInfo {
//     IndexedVariable leftVar;
//     std::vector<IndexedVariable> rightVars;
//     std::string value;
// };

void ASTContext::executeAssignment(const AssignmentInfo& info) {
    // План
    // 1. Если текущая assignment была declared - найти левую переменную в текущей
    // области видимости через getLocalVisibleVarsForChanges() и сделать её visible

    auto localVarsWriteMod = getLocalVarsForChanges();

    if (info.declared) {
        if (localVarsWriteMod.count(info.leftVar.name)) {
            localVarsWriteMod[info.leftVar.name]->visible = true;
        } else {
            std::cerr << "[WARNING] Declared variable " << info.leftVar.name
                      << " not found in local scope for visibility update\n";
        }
    }
    // 2. Для любой левой переменной попробовать вычислить её numеricalValue
    //(если не вычисляется - продолжать работу, не заполняя поле numericalValue)

    auto visibleVarsReadMod = getAllVisibleVars();
    auto visibleVarsVal = expr_utils::extractValues(visibleVarsReadMod);
    auto visibleVarsWriteMod = getAllVisibleVarsForChanges();

    if (visibleVarsWriteMod.count(info.leftVar.name)) {
        try {
            double value = ExpressionCalculator::evaluateWithTinyExpr(info.value, visibleVarsVal);
            visibleVarsWriteMod[info.leftVar.name]->value = info.value;
            visibleVarsWriteMod[info.leftVar.name]->numericVal = value;
        } catch (const std::exception& e) {
            // значение не вычислилось — оставляем как есть
            visibleVarsWriteMod[info.leftVar.name]->value = info.value;
            visibleVarsWriteMod[info.leftVar.name]->numericVal = std::nullopt;
        }
    } else {
        // std::cerr << "[WARNING] Variable " << info.leftVar.name << " not found for value assignment\n";
    }

    // 3. Вычисляем и выводим индексные значения переменной слева

    std::ostringstream lhsIndexStr;
    for (size_t i = 0; i < info.leftVar.indices.size(); i++) {
        double idxVal = ExpressionCalculator::evaluateWithTinyExpr(info.leftVar.indices[i], visibleVarsVal);
        lhsIndexStr << "[" << (int)idxVal << "]";
    }

    std::cout << info.leftVar.name << lhsIndexStr.str() << " = ";

    // 3. Вычисляем и выводим индексные значения всех переменных справа
    for (size_t i = 0; i < info.rightVars.size(); i++) {
        const auto& rv = info.rightVars[i];

        std::ostringstream rvIndexStr;
        for (size_t j = 0; j < rv.indices.size(); j++) {
            double idxVal = ExpressionCalculator::evaluateWithTinyExpr(rv.indices[j], visibleVarsVal);
            rvIndexStr << "[" << (int)idxVal << "]";
        }

        std::cout << rv.name << rvIndexStr.str();
        if (i + 1 < info.rightVars.size())
            std::cout << ", ";
    }
    std::cout << std::endl;
}

// struct ElseIfStatement {
//     std::string condition;
//     ScopedBlock block;
// };

// struct IfStatement {
//     std::string condition;
//     ScopedBlock thenBlock;
//     std::vector<ElseIfStatement> elseIfBranches;
//     ScopedBlock elseBlock;
// };

void ASTContext::executeIfStatement(const IfStatement& ifStmt) {
    auto visibleVarsReadMod = getAllVisibleVars();
    auto visibleVarsVal = expr_utils::extractValues(visibleVarsReadMod);

    // std::cout << " If cond: " << ifStmt.condition;
    double ifCond = ExpressionCalculator::evaluateWithTinyExpr(ifStmt.condition, visibleVarsVal);
    // std::cout << " == " << ifCond << std::endl;
    if (ifCond) {
        pushScope(ifStmt.thenBlock.localScope);
        executeInstructionList(ifStmt.thenBlock.instructions);
        popScope();
        return;
    }

    bool matched = false;
    visibleVarsReadMod = getAllVisibleVars();
    visibleVarsVal = expr_utils::extractValues(visibleVarsReadMod);

    for (const auto& elif : ifStmt.elseIfBranches) {
        // std::cout << " If cond: " << elif.condition;
        double elifCond = ExpressionCalculator::evaluateWithTinyExpr(elif.condition, visibleVarsVal);
        // std::cout << " == " << elifCond << std::endl;
        if (elifCond) {
            pushScope(elif.block.localScope);
            executeInstructionList(elif.block.instructions);
            popScope();
            matched = true;
            return;
        }
    }

    if (!matched && !ifStmt.elseBlock.instructions.empty()) {
        pushScope(ifStmt.elseBlock.localScope);
        executeInstructionList(ifStmt.elseBlock.instructions);
        popScope();
    }
}
