#pragma once

#include "builder.h"

namespace BSP::DesignPatterns::Builder {

class MazeGame {
  public:
    std::unique_ptr<Maze> createMaze(IMazeBuilder &builder);
};

} // namespace BSP::DesignPatterns::Builder
