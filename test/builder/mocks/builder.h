#pragma once

#include <gmock/gmock.h>

#include <builder.h>

namespace BSP::DesignPatterns::Builder {

class MockBuilder : public IMazeBuilder {
  public:
    MOCK_METHOD(void, buildMaze, (), (override));
    MOCK_METHOD(void, buildRoom, (int), (override));
    MOCK_METHOD(void, buildDoor, (int, int), (override));
    MOCK_METHOD(std::unique_ptr<Maze>, getMaze, (), (override));
};

} // namespace BSP::DesignPatterns::Builder
