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
void swapp(TreeNode *root){
    TreeNode* temp=root->left;
    root->left=root->right;
    root->right=temp;
    }
void fun(TreeNode*root){
    if(root==nullptr){
        return ;
        }
    swapp(root);
    
    fun(root->left);
    fun(root->right);

}
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return root;
        }
        fun(root);
        return root;
        // TreeNode* root1=root;
        // TreeNode*root2=root;
        // fun(root1,root2);
        // return root2;
    }
};