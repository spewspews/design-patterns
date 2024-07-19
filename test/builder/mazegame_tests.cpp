#include <gtest/gtest.h>

#include <builder/mazegame.h>

#include "mocks/builder.h"

namespace BSP::DesignPatterns::Builder {

using testing::ByMove;
using testing::Return;

class MazeGameTests : public testing::Test {
  protected:
    void SetUp() {}
    void TearDown() {}
    MazeGame mg;
};

TEST_F(MazeGameTests, BuildsTheMaze) {
    MockBuilder mb;
    EXPECT_CALL(mb, buildMaze());
    mg.buildMaze(mb);
}

} // namespace BSP::DesignPatterns::Builder
