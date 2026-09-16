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
int slv(TreeNode*root){
    if(root==nullptr) return 0;
    if(root->left==nullptr && root->right==nullptr){
        return 1;
    }
    int l;
    if(root->left!=nullptr){
        l=slv(root->left);
    }
    else l=INT_MAX;
    int r;
    if(root->right!=nullptr){
        r=slv(root->right);
    }
    else{
        r=INT_MAX;
    }
    // int l=slv(root->left);
    // int r=slv(root->right);
    return 1+min(l,r);
}
    int minDepth(TreeNode* root) {
        int a=slv(root);
        return a; 
    }
};