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
TreeNode * ans=nullptr;
void solve(TreeNode* root,int t){
    if(root==nullptr){
        return;
    }
    if(root->val==t){
        ans=root;
        return ;
    }
    if(root->val>t){
        solve(root->left,t);
    }
    if(root->val<t){
        solve(root->right,t);
    }
}
    TreeNode* searchBST(TreeNode* root, int val) {
        // if(root==nullptr){
        //     return ans;
        // }
        solve(root,val);
        return ans;

    }
};