#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(DepthFinderTester, null) {
  vector<int> input = {};
  BST solution(input);
  int actual = solution.MaxD();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(DepthFinderTester, normal) {
  vector<int> input = {3,5,2,4,9,1};
  BST solution(input);
  int actual = solution.MaxD();
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(DepthFinderTester, oneNode) {
  vector<int> input = {3};
  BST solution(input);
  int actual = solution.MaxD();
  int expected = 1;
  EXPECT_EQ(expected, actual);
}