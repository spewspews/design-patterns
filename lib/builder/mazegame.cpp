#include "mazegame.h"

namespace BSP::DesignPatterns::Builder {

std::unique_ptr<Maze>
MazeGame::createMaze(StandardMazeBuilder &builder) {
    buildMaze(builder);
    return builder.getMaze();
}

void
MazeGame::buildMaze(IMazeBuilder &builder) {
    builder.buildMaze();
    // Other instructions go here.
}

} // namespace BSP::DesignPatterns::Builder
