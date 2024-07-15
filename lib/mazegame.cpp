#include "mazegame.h"

namespace BSP::DesignPatterns::Builder {

std::unique_ptr<Maze>
MazeGame::createMaze(IMazeBuilder &builder) {
    builder.buildMaze();
    return nullptr;
}

} // namespace BSP::DesignPatterns::Builder
