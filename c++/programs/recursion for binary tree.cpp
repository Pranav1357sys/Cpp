#include <iostream>
using namespace std;
void inorder(treenode* root){
if(root==nullptr) return;
inorder(root->left);
cout<<root->val<<" ";
inorder(root->right);
}
