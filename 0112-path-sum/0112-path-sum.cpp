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
bool res=false;
void solve(TreeNode*root,int &tar,int sum){
    if(root==nullptr){
        return ;
    }
    sum=sum+root->val;
    if(root->left==nullptr && root->right==nullptr){ //leaf pr aa gye check 
        if(sum==tar){
            res=true;   
            return;
        }
    }
    solve(root->left,tar,sum);
    solve(root->right,tar,sum);
    sum-=root->val;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        solve(root,targetSum,sum);
        return res;
    }
};