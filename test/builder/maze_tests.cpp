#include <gtest/gtest.h>

#include <builder/maze.h>

namespace BSP::DesignPatterns {

class MazeTests : public testing::Test {
  protected:
    Maze maze;
};

TEST_F(MazeTests, EmptyMazeNoRoom) {
    auto [found, r] = maze.getRoom(23);
    ASSERT_FALSE(found);
}

TEST_F(MazeTests, AddRoomGetRoom) {
    {
        auto r = std::make_unique<Room>(23);
        maze.addRoom(std::move(r));
    }
    auto [found, r] = maze.getRoom(23);
    ASSERT_TRUE(found);
    ASSERT_EQ(r.getNum(), 23);
}

} // namespace BSP::DesignPatterns
