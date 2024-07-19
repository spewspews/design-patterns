#pragma once

#include <gmock/gmock.h>

#include <builder/builder.h>

namespace BSP::DesignPatterns::Builder {

class MockBuilder : public IMazeBuilder {
  public:
    MOCK_METHOD(void, buildMaze, (), (override));
    MOCK_METHOD(void, buildRoom, (int), (override));
    MOCK_METHOD(void, buildDoor, (int, int), (override));
};

} // namespace BSP::DesignPatterns::Builder
