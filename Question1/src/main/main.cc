#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  BST output;
  vector<int> input = {3,5,2,4,9,1};
  BST output2(input);

  int d = output2.MaxD();
  cout << d;
  return EXIT_SUCCESS;
}