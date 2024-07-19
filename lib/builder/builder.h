#pragma once

#include <memory>

#include <builder/maze.h>

namespace BSP::DesignPatterns::Builder {

class IMazeBuilder {
  public:
    virtual ~IMazeBuilder() = default;
    virtual void buildMaze() = 0;
    virtual void buildRoom(int room) = 0;
    virtual void buildDoor(int from, int to) = 0;
};

class StandardMazeBuilder : public IMazeBuilder {
  public:
    StandardMazeBuilder();
    void buildMaze() override;
    void buildRoom(int room) override;
    void buildDoor(int from, int to) override;
    std::unique_ptr<Maze> getMaze();

  private:
    std::unique_ptr<Maze> maze;
};

} // namespace BSP::DesignPatterns::Builder
