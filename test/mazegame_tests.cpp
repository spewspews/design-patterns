#include <gtest/gtest.h>

#include <mazegame.h>

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
    ON_CALL(mb, getMaze())
        .WillByDefault(Return(ByMove(std::make_unique<Maze>())));
    EXPECT_CALL(mb, buildMaze());
    EXPECT_CALL(mb, getMaze());
    EXPECT_NE(mg.createMaze(mb), nullptr);
}

} // namespace BSP::DesignPatterns::Builder
