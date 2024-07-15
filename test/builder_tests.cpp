#include <gtest/gtest.h>

#include <memory>

#include <builder.h>

namespace BSP::DesignPatterns::Builder {

class BuilderTests : public testing::Test {
  protected:
    void SetUp() { builder = std::make_unique<StandardMazeBuilder>(); }
    void TearDown() {}
    std::unique_ptr<IMazeBuilder> builder;
};

TEST_F(BuilderTests, FirstExample) { ASSERT_EQ(builder->getMaze(), nullptr); }

TEST_F(BuilderTests, MakeAMaze) {
    builder->buildMaze();
    ASSERT_NE(builder->getMaze(), nullptr);
}

TEST_F(BuilderTests, HasARoom) {
    builder->buildMaze();
    builder->buildRoom(23);
    auto m = builder->getMaze();
    auto [found, room] = m->getRoom(23);
    ASSERT_TRUE(found);
    ASSERT_EQ(room.getNum(), 23);
}

} // namespace BSP::DesignPatterns::Builder
