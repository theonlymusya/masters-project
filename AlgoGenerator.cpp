#include "AlgoGenerator.hpp"
#include <sstream>

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
AlgoInfo AlgoGenerator::generate() {
    AlgoInfo algo;
    // Block rootBlock("0", "0");
    // markNeededTables();

    IteratorNamer namer;
    // buildAlgoFromInstructions(astContext.getInstructions(), rootBlock, namer);
    for (const auto& instr : astContext.getInstructions()) {
        buildAlgoFromInstruction(instr, algo, namer);
    }

    // rootBlock.dims = std::to_string(rootBlock.args.size());
    // algo.addBlock(rootBlock);

    return algo;
}

void AlgoGenerator::buildAlgoFromInstruction(const Instruction& instr, AlgoInfo& algo, IteratorNamer& namer) {
    if (instr.type == InstructionType::FOR_LOOP) {
        const auto& loopInfo = std::get<LoopInfo>(instr.data);

        int thisBlockId = nextBlockId++;
        Block nestedBlock(std::to_string(thisBlockId), "0");

        currentBlockPath.push_back(thisBlockId);

        for (const auto& [itName, startVal] : loopInfo.itName_startVal) {
            nestedBlock.addArg(Arg(namer.next(), "0.." + itName));
        }

        buildAlgoFromInstructions(loopInfo.body.instructions, nestedBlock, namer);

        nestedBlock.dims = std::to_string(nestedBlock.args.size());

        algo.addBlock(nestedBlock);

        currentBlockPath.pop_back();

    } else if (instr.type == InstructionType::ASSIGNMENT) {
        const auto& assignInfo = std::get<AssignmentInfo>(instr.data);

        auto tablePtr = observer.getTableByAssignmentId(assignInfo.id);
        // if (!tablePtr || !tablePtr->showsDepends)
        //     return;

        int assignBlockId = nextBlockId++;
        Block assignBlock(std::to_string(assignBlockId), "0");

        tableIdToBlockPath[assignInfo.id] = currentBlockPath;
        tableIdToBlockPath[assignInfo.id].push_back(assignBlockId);

        for (const auto& row : tablePtr->rows) {
            processRow(row, assignBlock, namer);
        }

        algo.addBlock(assignBlock);

    } else if (instr.type == InstructionType::BLOCK || instr.type == InstructionType::PROGRAM ||
               instr.type == InstructionType::MAIN_FUNC) {
        const auto& scoped = std::get<ScopedBlock>(instr.data);
        for (const auto& innerInstr : scoped.instructions) {
            buildAlgoFromInstruction(innerInstr, algo, namer);
        }
    }
}

void AlgoGenerator::buildAlgoFromInstructions(const std::vector<Instruction>& instrs,
                                              Block& currentBlock,
                                              IteratorNamer& namer) {
    for (const auto& instr : instrs) {
        if (instr.type == InstructionType::FOR_LOOP) {
            const auto& loopInfo = std::get<LoopInfo>(instr.data);

            int thisBlockId = nextBlockId++;
            Block nestedBlock(std::to_string(thisBlockId), "0");

            // добавляем в путь
            currentBlockPath.push_back(thisBlockId);

            for (const auto& [itName, startVal] : loopInfo.itName_startVal) {
                nestedBlock.addArg(Arg(namer.next(), "0.." + itName));  // Пока диапазон фиктивный
            }

            buildAlgoFromInstructions(loopInfo.body.instructions, nestedBlock, namer);

            // выходим из пути
            // currentBlockPath.pop_back();

            nestedBlock.dims = std::to_string(nestedBlock.args.size());

            currentBlock.addNestedBlock(nestedBlock);

            currentBlockPath.pop_back();

        } else if (instr.type == InstructionType::ASSIGNMENT) {
            const auto& assignInfo = std::get<AssignmentInfo>(instr.data);

            auto tablePtr = observer.getTableByAssignmentId(assignInfo.id);
            // if (!tablePtr || !tablePtr->showsDepends)
            //     return;

            int assignBlockId = nextBlockId++;
            Block assignBlock(std::to_string(assignBlockId), "0");

            tableIdToBlockPath[assignInfo.id] = currentBlockPath;
            tableIdToBlockPath[assignInfo.id].push_back(assignBlockId);

            for (const auto& row : tablePtr->rows) {
                processRow(row, assignBlock, namer);
            }

            currentBlock.addNestedBlock(assignBlock);

        } else if (instr.type == InstructionType::BLOCK || instr.type == InstructionType::PROGRAM ||
                   instr.type == InstructionType::MAIN_FUNC) {
            const auto& scoped = std::get<ScopedBlock>(instr.data);
            buildAlgoFromInstructions(scoped.instructions, currentBlock, namer);
        }
    }
}

// void AlgoGenerator::buildAlgoFromInstructions(const std::vector<Instruction>& instrs,
//                                               AlgoInfo& algo,
//                                               IteratorNamer& namer) {
//     Block* currentLoopBlock = nullptr;

//     for (size_t idx = 0; idx < instrs.size(); ++idx) {
//         const auto& instr = instrs[idx];

//         if (instr.type == InstructionType::FOR_LOOP) {
//             const bool nextIsForLoop =
//                 (idx + 1 < instrs.size() && instrs[idx + 1].type == InstructionType::FOR_LOOP);

//             if (!currentLoopBlock) {
//                 int blockId = nextBlockId++;
//                 currentLoopBlock = new Block(std::to_string(blockId), "1");

//                 // сохраняем путь вложенности
//                 currentBlockPath.push_back(blockId);
//             } else if (!nextIsForLoop) {
//                 // если следующий не for_loop — пора будет закончить цепочку
//             }

//             // добавляем итератор
//             const auto& loopInfo = std::get<LoopInfo>(instr.data);
//             for (const auto& [itName, _] : loopInfo.itName_startVal) {
//                 currentLoopBlock->addArg(Arg(namer.next(), "0.." + itName));
//             }

//             buildAlgoFromInstructions(loopInfo.body.instructions, *currentLoopBlock, namer);

//             if (!nextIsForLoop) {
//                 // завершаем цепочку вложенных циклов
//                 currentLoopBlock->dims = std::to_string(currentLoopBlock->args.size());
//                 algo.addBlock(*currentLoopBlock);
//                 delete currentLoopBlock;
//                 currentLoopBlock = nullptr;

//                 currentBlockPath.pop_back();
//             }
//         } else if (instr.type == InstructionType::ASSIGNMENT) {
//             const auto& assignInfo = std::get<AssignmentInfo>(instr.data);
//             auto tablePtr = observer.getTableByAssignmentId(assignInfo.id);
//             if (!tablePtr)
//                 continue;

//             // создаём отдельный блок для этого assignment
//             int blockId = nextBlockId++;
//             Block assignBlock(std::to_string(blockId), "0");

//             tableIdToBlockPath[assignInfo.id] = currentBlockPath;
//             tableIdToBlockPath[assignInfo.id].push_back(blockId);

//             for (const auto& row : tablePtr->rows) {
//                 processRow(row, assignBlock, namer);
//             }

//             algo.addBlock(assignBlock);
//         } else if (instr.type == InstructionType::BLOCK || instr.type == InstructionType::PROGRAM ||
//                    instr.type == InstructionType::MAIN_FUNC) {
//             const auto& scoped = std::get<ScopedBlock>(instr.data);
//             buildAlgoFromInstructions(scoped.instructions, algo, namer);
//         }
//     }
// }

void AlgoGenerator::processRow(const TableRow& row, Block& block, IteratorNamer& namer) {
    std::ostringstream condition;
    for (size_t idx = 0; idx < row.iters.size(); ++idx) {
        if (idx > 0)
            condition << " and ";
        condition << namer.getName(idx) << " == " << row.iters[idx];
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
