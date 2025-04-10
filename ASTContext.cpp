// ASTContext.cpp
#include "ASTContext.hpp"
#include <cstdlib>
#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>
#include <unordered_map>

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

std::unordered_map<std::string, VarInfo> ASTContext::getFullScope() const {
    std::unordered_map<std::string, VarInfo> result;

    for (auto it = scopeStack.rbegin(); it != scopeStack.rend(); ++it) {
        for (const auto& [name, info] : *it) {
            result.insert({name, info});
        }
    }

    return result;
}

std::unordered_map<std::string, VarInfo*> ASTContext::getFullScopeForChanges() {
    std::unordered_map<std::string, VarInfo*> result;

    for (auto it = scopeStack.rbegin(); it != scopeStack.rend(); ++it) {
        for (auto& [name, info] : *it) {
            if (!result.count(name)) {
                result[name] = &info;
            }
        }
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
                const auto& loop = std::get<LoopInfo>(instr.data);
                pushScope(loop.body.localScope);
                executeLoop(std::get<LoopInfo>(instr.data));
                popScope();
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
    // 0.2. Считаем, что мы выходим из ScopedBlock цикла for сразу после выполнения текущей функции

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

    //  1. присваиваем старторвые значения переменным-итераторам
    //  если таковые не объявлены в заголовке цикла (пустая область инициализации), то ничего не происходит
    //  пример:
    //  int i = 0;
    //  for ( ; i < n; i++)

    // если переменная объявляется ДО цикла - она лежит во внешнем scope и изменения её значений должны
    // сохраняться если переменная повторно объявляется в заголовке цикла - она лежит и во внешнем и в
    // локальном scope и изменения её значений внутри цикла не должны влиять на внешнюю переменную
    // нам нужно сделать scope с итераторами, которые лежат только в локальном scope

    // т. е. важен именно факт ИНИЦИАЛИЗАЦИИ
    // ПРИМЕР 1
    // int i = 0;
    // for ( ; i < n; i++)
    // и
    // int i = 0;
    // for ( i = 6; i < n; i++)
    // и
    // int i;
    // for ( i = 6; i < n; i++)
    // внешняя переменная примет ОДИНАКОВОЕ ЗНАЧЕНИЕ n-1
    // стартовое значение будет отличаться!!! 0, 6, 6
    // что связывает эти примеры?
    // 1. i НЕ лежит в loop_local_scope
    // 2. стартовое значение должно быть переписано! (как?)
    // ПРИМЕР 2
    // int i = 0;
    // for (int i = 6; i < n; i++)
    // внешняя переменная ОСТАНЕТСЯ при своём значении 0
    // внутренняя переменная принимает значения 6,..,n-1
    // такие переменные уже лежат в loop local scope

    std::unordered_map<std::string, iterValType> iterValues;  // мапа локальных итераторов текущего цикла

    // по идее getFullScope() должен взять i j k из loop_local_scope, если есть declaration в заголовке цикла,
    // из внешнего scope, если не было declaration
    auto all_visible_vars = getFullScope();
    auto all_visible_vars_val = expr_utils::extractValues(all_visible_vars);

    for (const auto& [varName, val] : all_visible_vars_val)
        std::cout << varName << " = " << val << std::endl;

    // стартовые значения вычислились только для итераторов
    // которые объявлены в поле инициализации =>
    // осторожно со случаем for ( ; i < n; i++)
    // перед вычислением сondition, нужно посчитать значение i (как?...)
    // такое ощущение что значения переменных из всех scope надо заранее посчитать, хммм
    // в принципе да, наверное это решит проблему
    // хорошо, то есть предполагаем, что мы уже прошлись по дереву и посчитали значения переменных, которые
    // можно было вычислить? блин а как это по твоему делать?
    // а ну не, это не предварительная операция должна
    // быть, а просто по мере обхода ты же обрабатываешь assignment, так что вот как раз
    for (const auto& [varName, iterInfo] : loop.varNames) {
        double start = ExpressionCalculator::evaluateWithTinyExpr(iterInfo.startValue, all_visible_vars_val);
        iterValues[varName] = start;
    }

    // 2. готовим отдельную область с локальными переменными-итераторами и их значениями
    // т. о. изменения значений не будут касаться внешних переменных

    // по идее если есть переинициализация одной переменной во внешней области
    // и в локальной, по функции getFullScope будет получать именно локальное значение этой переменной,
    // потому что мы его значение тоже кладём в scope
    // пример
    // int i = 0;
    // for (int i = 6; i < n; i++)
    // а при popScope по завершение цикла i снова станет равна 0

    std::unordered_map<std::string, VarInfo> iterScope;  // область видимости итераторов

    for (const auto& [varName, val] : iterValues) {
        auto it = cur_scope.find(varName);
        if (it != cur_scope.end()) {
            scope[varName] = it->second;
            scope[varName].value = std::to_string((int)val);
        } else {
            scope[varName] = VarInfo{"int", std::to_string((int)val), false, 0};
        }
    }
    pushScope(scope);

    // 2. Начинаем итерации
    while (true) {
        std::cout << "\n--- Новая итерация цикла ---\n";

        // 2.1 Получаем объединённую область видимости
        auto scope = getFullCurScope();

        // 2.2 Добавляем текущие значения итераторов, если они ещё не задекларированы
        for (const auto& [varName, val] : iterValues) {
            std::cout << "  Итератор " << varName << " = " << val << "\n";
            auto it = scope.find(varName);
            if (it != scope.end()) {
                it->second.value = std::to_string((int)val);
            } else {
                scope[varName] = VarInfo{"int", std::to_string((int)val), false, 0};
            }
        }

        std::cout << "  Условие: " << loop.condition << "\n";

        // 2.3 Проверяем условие
        double cond =
            ExpressionCalculator::evaluateWithTinyExpr(loop.condition, expr_utils::extractValues(scope));
        std::cout << "  Значение условия: " << cond << "\n";
        if (!cond)
            break;

        // 2.4 Добавляем scope и исполняем тело
        pushScope(scope);
        pushScope(loop.body.localScope);
        executeInstructionList(loop.body.instructions);
        popScope();  // тело
        popScope();  // итераторы

        // 2.5 Обновляем итераторы
        for (const auto& [varName, iterInfo] : loop.varNames) {
            double updated = ExpressionCalculator::evaluateWithTinyExpr(
                iterInfo.updateValue, expr_utils::extractValues(getFullCurScope()));
            std::cout << "  Обновление " << varName << " = " << updated << "\n";
            iterValues[varName] = updated;
        }
    }
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
    std::unordered_map<std::string, VarInfo> scope = this->getFullCurScope();
    auto values = expr_utils::extractValues(scope);

    // Вычисляем индекс lhs
    std::ostringstream lhsIndexStr;
    for (size_t i = 0; i < info.leftVar.indices.size(); ++i) {
        double idxVal = ExpressionCalculator::evaluateWithTinyExpr(info.leftVar.indices[i], values);
        lhsIndexStr << "[" << (int)idxVal << "]";
    }

    std::cout << info.leftVar.name << lhsIndexStr.str() << " = ";

    for (size_t i = 0; i < info.rightVars.size(); ++i) {
        const auto& rv = info.rightVars[i];

        std::ostringstream rvIndexStr;
        for (size_t j = 0; j < rv.indices.size(); ++j) {
            double idxVal = ExpressionCalculator::evaluateWithTinyExpr(rv.indices[j], values);
            rvIndexStr << "[" << (int)idxVal << "]";
        }

        std::cout << rv.name << rvIndexStr.str();
        if (i + 1 < info.rightVars.size())
            std::cout << ", ";
    }
    std::cout << std::endl;
}

void ASTContext::executeIfStatement(const IfStatement& ifStmt) const {
    //     // Для демонстрации считаем, что условие – число, отличное от 0 означает true.
    //     int condValue = std::stoi(expandVariables(ifStmt.condition, loopVars));
    //     if (condValue) {
    //         executeInstructionList(ifStmt.thenBlock.instructions, loopVars);
    //     } else {
    //         bool executedElseIf = false;
    //         for (const auto& branch : ifStmt.elseIfBranches) {
    //             int elifVal = std::stoi(expandVariables(branch.condition, loopVars));
    //             if (elifVal) {
    //                 executeInstructionList(branch.block.instructions, loopVars);
    //                 executedElseIf = true;
    //                 break;
    //             }
    //         }
    //         if (!executedElseIf && !ifStmt.elseBlock.instructions.empty()) {
    //             executeInstructionList(ifStmt.elseBlock.instructions, loopVars);
    //         }
    //     }

    // if (evaluateCondition(expr, expr_utils::extractValues(getCombinedScope()))) {
    //     pushScope(ifStmt.thenBlock.localScope);
    //     executeInstructionList(ifStmt.thenBlock.instructions);
    //     popScope();
    //     break;
    // }

    // bool matched = false;
    // for (const auto& elif : ifStmt.elseIfBranches) {
    //     if (evaluateCondition(expr, expr_utils::extractValues(getCombinedScope())) {
    //         pushScope(elif.block.localScope);
    //         executeInstructionList(elif.block.instructions);
    //         popScope();
    //         matched = true;
    //         break;
    //     }
    // }

    // if (!matched && !ifStmt.elseBlock.instructions.empty()) {
    //     pushScope(ifStmt.elseBlock.localScope);
    //     executeInstructionList(ifStmt.elseBlock.instructions);
    //     popScope();
    // }
}
