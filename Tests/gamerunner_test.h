#ifndef __GAMERUNNER_TEST_HPP__
#define __GAMERUNNER_TEST_HPP__

#include "../GameRunner/GameRunner.cpp"

class GameRunner;

GameRunner * GameRunner::gameInstance = nullptr;

TEST(GameRunnerTest, InstanceGameRunner) {
  GameRunner* gameRunner1 = gameRunner1->getInstance();
  EXPECT_TRUE(gameRunner1->getInstance() != nullptr);
}

TEST(GameRunnerTest, AreaTest) {
  GameRunner* gameRunner1 = gameRunner1->getInstance();
  EXPECT_EQ(gameRunner1->getCurrentLocation(), FOREST);
}


#endif
