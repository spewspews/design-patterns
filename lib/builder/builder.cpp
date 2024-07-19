#include "builder.h"

namespace BSP::DesignPatterns::Builder {

StandardMazeBuilder::StandardMazeBuilder() {}

void
StandardMazeBuilder::buildMaze() {
    maze = std::make_unique<Maze>();
}

void
StandardMazeBuilder::buildRoom(int room) {
    if (maze == nullptr) return;
    maze->addRoom(std::make_unique<Room>(room));
}

void
StandardMazeBuilder::buildDoor(int from, int to) {}

std::unique_ptr<Maze>
StandardMazeBuilder::getMaze() {
    auto m = std::move(maze);
    maze = nullptr;
    return m;
}

} // namespace BSP::DesignPatterns::Builder
