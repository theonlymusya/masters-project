#include "AlgoGenerator.hpp"
#include <sstream>
#include "InstrPrinter.hpp"

AlgoGenerator::AlgoGenerator(const Observer& obs, const ASTContext& ast) : observer(obs), astContext(ast) {}

void AlgoGenerator::markNeededTables() {
    // Сначала отмечаем таблицы, которые имеют хотя бы один source
    for (const auto& [id, tablePtr] : observer.getAllTables()) {
        if (!tablePtr)
            continue;

        for (const auto& row : tablePtr->rows) {
            if (!row.sources.empty()) {
                tablePtr->showsDepends = true;
                break;
            }
        }
    }

    // Теперь проходим ещё раз — отмечаем таблицы, на которые ссылаются другие
    for (const auto& [id, tablePtr] : observer.getAllTables()) {
        if (!tablePtr)
            continue;

        for (const auto& row : tablePtr->rows) {
            for (const auto& src : row.sources) {
                auto targetTablePtr = observer.getTableByAssignmentId(src.tableIdx);
                if (targetTablePtr) {
                    targetTablePtr->showsDepends = true;
                }
            }
        }
    }
}

// 1. bsrc - найти при предварительном обходе
// 2. i j k лучше брать изминмаксных в таблице, я думаю, чтобы лишних итераций не было
// warning если оператор присваивания вне цикла лежит ему нужен arg 0..0
AlgoInfo AlgoGenerator::generate() {
    AlgoInfo algo;
    // markNeededTables();

    IteratorNamer namer;
    auto filtered = filterInstrs(astContext.getInstructions());
    InstructionsPrinter::printInstructionsScheme(filtered);
    buildAlgoFromInstructions(filtered, &algo, nullptr, namer, 0);

    // rootBlock.dims = std::to_string(rootBlock.args.size());
    // algo.addBlock(rootBlock);

    return algo;
}

std::vector<Instruction> AlgoGenerator::filterInstrs(const std::vector<Instruction>& instrs) {
    std::vector<Instruction> filtered_instrs;
    for (auto& instr : instrs) {
        switch (instr.type) {
            case InstructionType::ASSIGNMENT:
                filtered_instrs.push_back(instr);
                break;

            case InstructionType::FOR_LOOP: {
                // склонируем LoopInfo, но его тело тоже фильтруем
                LoopInfo L = std::get<LoopInfo>(instr.data);
                L.body.instructions = filterInstrs(L.body.instructions);
                Instruction copy;
                copy.type = InstructionType::FOR_LOOP;
                copy.data = std::move(L);
                filtered_instrs.push_back(std::move(copy));
                break;
            }

            case InstructionType::BLOCK:
            case InstructionType::PROGRAM:
            case InstructionType::MAIN_FUNC: {
                // из обёрток «разворачиваем» вложенность сразу
                const auto& sc = std::get<ScopedBlock>(instr.data);
                auto nested = filterInstrs(sc.instructions);
                // вносим их прямо на уровень выше
                filtered_instrs.insert(filtered_instrs.end(), std::make_move_iterator(nested.begin()),
                                       std::make_move_iterator(nested.end()));
                break;
            }

            default:
                // IF_STATEMENT и всё остальное — игнорируем
                break;
        }
    }
    return filtered_instrs;
}

// возвращает пару: (число подряд вложенных for), указатель на самый глубокий LoopInfo
std::pair<int, const LoopInfo*> AlgoGenerator::computeLevels(const LoopInfo& loop) {
    const LoopInfo* cur = &loop;
    int levels = 0;

    while (true) {
        levels++;
        if (cur->body.instructions.size() != 1)
            break;
        const Instruction& only = cur->body.instructions[0];
        if (only.type != InstructionType::FOR_LOOP)
            break;
        cur = &std::get<LoopInfo>(only.data);
    }
    return {levels, cur};
}

void AlgoGenerator::buildAlgoFromInstructions(const std::vector<Instruction>& instrs,
                                              AlgoInfo* algo,
                                              Block* parentBlock,
                                              IteratorNamer& namer,
                                              int depth) {
    for (size_t idx = 0; idx < instrs.size(); idx++) {
        const auto& instr = instrs[idx];

        switch (instr.type) {
            case InstructionType::FOR_LOOP: {
                const auto& L = std::get<LoopInfo>(instr.data);

                auto [levels, deepest] = computeLevels(L);

                // idx += levels - 1;

                int bid = nextBlockId++;
                std::cerr << std::endl << "id" << bid << "levs" << levels << std::endl;
                Block blk(std::to_string(bid), std::to_string(levels));
                currentBlockPath.push_back(bid);

                for (int i = 0; i < levels; i++) {
                    std::string argName = namer.nameAt(depth, i);
                    blk.addArg(Arg(argName, "0..0"));
                }
                blk.dims = std::to_string(blk.args.size());

                buildAlgoFromInstructions(deepest->body.instructions,
                                          /*algo=*/nullptr,
                                          /*parentBlock=*/&blk, namer, depth + 1);

                currentBlockPath.pop_back();

                if (algo)
                    algo->addBlock(std::move(blk));
                else
                    parentBlock->addNestedBlock(std::move(blk));

                break;
            }

            case InstructionType::ASSIGNMENT: {
                const auto& A = std::get<AssignmentInfo>(instr.data);
                auto tbl = observer.getTableByAssignmentId(A.id);
                if (!tbl)
                    break;

                bool hasNeighbors = (instrs.size() > 1);
                // на 0-вом уровне вложенности нужно делать блок размерности 1
                if (hasNeighbors && depth != 0) {
                    int abid = nextBlockId++;
                    Block aBlk(std::to_string(abid), "0");
                    tableIdToBlockPath[A.id] = currentBlockPath;
                    tableIdToBlockPath[A.id].push_back(abid);

                    for (auto& row : tbl->rows)
                        processRow(row, aBlk, namer);
                    if (algo)
                        algo->addBlock(std::move(aBlk));
                    else
                        parentBlock->addNestedBlock(std::move(aBlk));
                } else {
                    for (auto& row : tbl->rows) {
                        if (parentBlock) {
                            processRow(row, *parentBlock, namer);
                        } else {
                            int soloId = nextBlockId++;
                            Block solo(std::to_string(soloId), "1");
                            solo.addArg(Arg("i", "0..0"));
                            tableIdToBlockPath[A.id] = currentBlockPath;
                            tableIdToBlockPath[A.id].push_back(soloId);
                            processRow(row, solo, namer);
                            algo->addBlock(std::move(solo));
                        }
                    }
                }
                break;
            }
            default:
                break;
        }
    }
}

// void AlgoGenerator::buildAlgoFromInstruction(const Instruction& instr, AlgoInfo& algo, IteratorNamer&
// namer) {
//     if (instr.type == InstructionType::FOR_LOOP) {
//         const auto& loopInfo = std::get<LoopInfo>(instr.data);

//         int thisBlockId = nextBlockId++;
//         Block nestedBlock(std::to_string(thisBlockId), "0");

//         currentBlockPath.push_back(thisBlockId);

//         for (const auto& [itName, startVal] : loopInfo.itName_startVal) {
//             nestedBlock.addArg(Arg(namer.next(), "0.." + itName));
//         }

//         buildAlgoFromInstructions(loopInfo.body.instructions, nestedBlock, namer);

//         nestedBlock.dims = std::to_string(nestedBlock.args.size());

//         algo.addBlock(nestedBlock);

//         currentBlockPath.pop_back();

//     } else if (instr.type == InstructionType::ASSIGNMENT) {
//         const auto& assignInfo = std::get<AssignmentInfo>(instr.data);

//         auto tablePtr = observer.getTableByAssignmentId(assignInfo.id);
//         // if (!tablePtr || !tablePtr->showsDepends)
//         //     return;

//         int assignBlockId = nextBlockId++;
//         Block assignBlock(std::to_string(assignBlockId), "0");

//         tableIdToBlockPath[assignInfo.id] = currentBlockPath;
//         tableIdToBlockPath[assignInfo.id].push_back(assignBlockId);

//         for (const auto& row : tablePtr->rows) {
//             processRow(row, assignBlock, namer);
//         }

//         algo.addBlock(assignBlock);

//     } else if (instr.type == InstructionType::BLOCK || instr.type == InstructionType::PROGRAM ||
//                instr.type == InstructionType::MAIN_FUNC) {
//         const auto& scoped = std::get<ScopedBlock>(instr.data);
//         for (const auto& innerInstr : scoped.instructions) {
//             buildAlgoFromInstruction(innerInstr, algo, namer);
//         }
//     }
// }

// void AlgoGenerator::buildAlgoFromInstructions(const std::vector<Instruction>& instrs,
//                                               Block& currentBlock,
//                                               IteratorNamer& namer) {
//     for (const auto& instr : instrs) {
//         if (instr.type == InstructionType::FOR_LOOP) {
//             const auto& loopInfo = std::get<LoopInfo>(instr.data);

//             int thisBlockId = nextBlockId++;
//             Block nestedBlock(std::to_string(thisBlockId), "0");

//             // добавляем в путь
//             currentBlockPath.push_back(thisBlockId);

//             for (const auto& [itName, startVal] : loopInfo.itName_startVal) {
//                 nestedBlock.addArg(Arg(namer.next(), "0.." + itName));  // Пока диапазон фиктивный
//             }

//             buildAlgoFromInstructions(loopInfo.body.instructions, nestedBlock, namer);

//             // выходим из пути
//             // currentBlockPath.pop_back();

//             nestedBlock.dims = std::to_string(nestedBlock.args.size());

//             currentBlock.addNestedBlock(nestedBlock);

//             currentBlockPath.pop_back();

//         } else if (instr.type == InstructionType::ASSIGNMENT) {
//             const auto& assignInfo = std::get<AssignmentInfo>(instr.data);

//             auto tablePtr = observer.getTableByAssignmentId(assignInfo.id);
//             // if (!tablePtr || !tablePtr->showsDepends)
//             //     return;

//             int assignBlockId = nextBlockId++;
//             Block assignBlock(std::to_string(assignBlockId), "0");

//             tableIdToBlockPath[assignInfo.id] = currentBlockPath;
//             tableIdToBlockPath[assignInfo.id].push_back(assignBlockId);

//             for (const auto& row : tablePtr->rows) {
//                 processRow(row, assignBlock, namer);
//             }

//             currentBlock.addNestedBlock(assignBlock);

//         } else if (instr.type == InstructionType::BLOCK || instr.type == InstructionType::PROGRAM ||
//                    instr.type == InstructionType::MAIN_FUNC) {
//             const auto& scoped = std::get<ScopedBlock>(instr.data);
//             buildAlgoFromInstructions(scoped.instructions, currentBlock, namer);
//         }
//     }
// }

void AlgoGenerator::processRow(const TableRow& row, Block& block, IteratorNamer& namer) {
    std::ostringstream condition;
    for (size_t idx = 0; idx < row.iters.size(); idx++) {
        if (idx > 0)
            condition << " and ";
        condition << namer.nameAt(0, idx) << " == " << row.iters[idx];
    }

    Vertex vertex(condition.str(), "1");

    for (const auto& src : row.sources) {
        std::vector<std::string> bsrcVec;
        std::vector<std::string> srcVec;

        auto it = tableIdToBlockPath.find(src.tableIdx);
        if (it != tableIdToBlockPath.end()) {
            const auto& path = it->second;
            for (size_t idx = 0; idx < path.size(); ++idx) {
                bsrcVec.push_back(std::to_string(path[idx]));
            }
        } else {
            std::cerr << "[ERROR] Path for tableId=" << src.tableIdx << " not found!\n";
        }

        for (int val : src.srcTableIters) {
            srcVec.push_back(std::to_string(val));
        }

        vertex.addDependency(InEdge(bsrcVec, srcVec));
    }

    block.addVertex(vertex);
}
