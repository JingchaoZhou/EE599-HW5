#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST {
public:
  BST();

// Inserts elements of initial_values
// one by one into the Tree
  BST(std::vector<int> initial_values);
  ~BST();

  void push(int key); // **GT** Inserts a key inside Tree
  bool find(int key); // **GT** Returns true of key is in the tree
  bool erase(int key); // **GT** Removes the key from the tree. If
//not successful, returns false.
  TreeNode* erase_helper(TreeNode *root, int key);

  void push_helper(TreeNode *&root, int key);
  bool find_helper(TreeNode *root, int key);
  void Delete(TreeNode *node);
  TreeNode *FindMin(TreeNode *root);
  vector <int> traverse();

  int MaxDepth(TreeNode *root);
  int MaxD();

  void InorderRec(TreeNode *root,vector<int> &result);
  vector<int> InoderPrint();

  vector<int> InorderNonRec(TreeNode *root);
  vector<int> InoderPrint2();
  
private:
  TreeNode *root_;
  vector<int> result;
  
  
  //void erase_helper(TreeNode *root, int key);
};

#endif