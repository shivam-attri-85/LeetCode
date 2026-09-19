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
bool ispres(TreeNode*root){ //1 present h ya nhi
    if(root==nullptr){
        return false;
    }
    if(root->val==1) return true;

    return(ispres(root->left) || ispres(root->right));
}

TreeNode*solve(TreeNode*root){
    if(root==nullptr) return nullptr;
    if(ispres(root->left)!=true){
        root->left=nullptr;
        }

    if(ispres(root->right)!=true){
        root->right=nullptr;
        }
        
    root->left=solve(root->left);
    root->right=solve(root->right);
    if(root->left==nullptr &&root->right==nullptr && root->val==0){
        return nullptr;
    }
    return root;
}
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL) return NULL;
        return solve(root);

    }
};