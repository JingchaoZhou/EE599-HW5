#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  vector<int> input = {};
  BST output2(input);
 vector<int> output = output2.InoderPrint2();
 for (int i = 0; i< output.size();i++){
   cout << output[i] <<" done";
 }
  
  return EXIT_SUCCESS;
}