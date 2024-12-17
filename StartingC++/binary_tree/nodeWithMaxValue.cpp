#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

int maxInTree(TreeNode* root){
    if(root==NULL) return INT_MIN;
    // int lmax = maxInTree(root->left);
    // int rmax = maxInTree(root->right);
    return max(root->val, max(maxInTree(root->left),maxInTree(root->right)));
}

int main(){
    TreeNode* a = new TreeNode(1); //root
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout << maxInTree(a);
    return 0;
}