/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int getleft(TreeNode*node){
    int lh=0;
    while(node){
        lh++;
        node=node->left;
    }
    return lh;
}

int getright(TreeNode*node){
    int rh=0;
    while(node){
        rh++;
        node=node->right;
    }
    return rh;
}

int solve(TreeNode*root){
    if(root==nullptr) return 0;
    int lh=getleft(root);
    int rh=getright(root);
    if(lh==rh) return (pow(2,rh)-1);//[perfect ke case mei ];

    return  solve(root->left)+solve(root->right)+1;
}
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
       int ans= solve(root);
        return ans;
    }
};