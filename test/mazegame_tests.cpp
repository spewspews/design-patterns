#include <gtest/gtest.h>

#include <mazegame.h>

#include "mocks/builder.h"

namespace BSP::DesignPatterns::Builder {

class MazeGameTests : public testing::Test {
  protected:
    void SetUp() {}
    void TearDown() {}
    MazeGame mg;
};

TEST_F(MazeGameTests, BuildsTheMaze) {
    MockBuilder mb;
    EXPECT_CALL(mb, buildMaze());
    mg.createMaze(mb);
}

} // namespace BSP::DesignPatterns::Builder
