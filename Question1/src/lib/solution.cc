#include "solution.h"

BST::BST() { 
  root_ = nullptr;
 }

 BST::BST(vector<int> initial_values){
   root_ = nullptr;
   for(int i = 0; i< initial_values.size();i++){
     BST::push(initial_values[i]);
   } 
 }

 BST::~BST(){
   BST::Delete(root_);
 }


void BST::Delete(TreeNode *node){
     if (node != nullptr){
     BST::Delete(node -> left);
     BST::Delete(node -> right);
     delete node;
   }
}

void BST::push_helper(TreeNode *&root, int key){
  if (root == nullptr){
    root = new TreeNode(key);
    }
  else if (key < root -> val){
    BST::push_helper(root->left, key);
  }
  else if(key > root -> val){
    BST::push_helper(root -> right, key);
  }
}

void BST::push(int key){
  BST::push_helper(root_, key);
}

bool BST::find_helper(TreeNode *r, int key){
  
  if (r == nullptr) {
    return false;
  }
  else if (r->val == key) {
    return true;
  }
  else if (key < r->val) {
    return BST::find_helper(r->left, key);
  } 
  else 
  {
    return BST::find_helper(r->right, key);
  }

}

bool BST::find(int key){
  return BST::find_helper(root_, key);

}

TreeNode* BST::erase_helper(TreeNode *root, int key){
  if(root == NULL) return root;

  if(key < root ->val) {
     root -> left = erase_helper(root ->left,key);
  }

  else if (key > root->val){
    root -> right = erase_helper(root -> right, key);
  }

  else{
    if (root -> left == NULL){
      TreeNode *temp = root -> right;
      free(root);
      return temp;
    }

    else if (root -> right == NULL){
      TreeNode *temp = root -> left;
      free(root);
      return temp;
    }

    TreeNode* temp = FindMin(root->right);
    root -> val = temp -> val;
    root -> right = erase_helper(root->right, temp->val);
  }
  
  return root;
}

TreeNode* BST::FindMin(TreeNode *root){
  while(root->left != NULL) root = root ->left;
  return root;
}

bool BST::erase(int key){
  if (find_helper(root_,key) != true){
    return false;
  }
  else{
    root_ = erase_helper(root_, key);
    return true;
  }
}

vector<int> BST::traverse(){

  queue <TreeNode *> q;
  vector <int> outputs = {};
  TreeNode * front;
  if (root_ == NULL)return outputs;

  q.push(root_);
  while(!q.empty()){
    front = q.front();
    q.pop();
    if (front ->left){
      q.push(front->left);
    }
    if(front->right){
      q.push(front->right);
    }
    outputs.push_back(front->val);
  }
  return outputs;
}

int BST::MaxDepth(TreeNode *root){
  int depth = 0;
  if (root == NULL){
    return depth;
  }

  else{
    int lDepth = MaxDepth(root -> left);
    int rDepth = MaxDepth(root -> right);

    if(lDepth > rDepth){
      return (lDepth + 1);
    }
    else {
      return rDepth + 1;
    }
  }
}//Time Complexity: O(logn)

int BST::MaxD(){
  return MaxDepth(root_);
}