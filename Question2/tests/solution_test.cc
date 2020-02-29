#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(InOrderTester, recursive) {
  vector<int> input = {3,5,2,4,9,1};
  BST solution(input);
  vector<int> actual = solution.InoderPrint();
  vector<int> expected = {1,2,3,4,5,9};
  EXPECT_EQ(expected, actual);
}

TEST(InOrderTester, Nonrecursive) {
  vector<int> input = {3,5,2,4,9,1};
  BST solution(input);
  vector<int> actual = solution.InoderPrint2();
  vector<int> expected = {1,2,3,4,5,9};
  EXPECT_EQ(expected, actual);
}

TEST(InOrderTester, emptyRe) {
  vector<int> input = {};
  BST solution(input);
  vector<int> actual = solution.InoderPrint();
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(InOrderTester, emptyNonRe) {
  vector<int> input = {};
  BST solution(input);
  vector<int> actual = solution.InoderPrint2();
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}