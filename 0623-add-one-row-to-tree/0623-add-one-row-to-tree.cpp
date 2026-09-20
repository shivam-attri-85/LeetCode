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
TreeNode* solve(TreeNode* root,int val,int dep,int curr){
    if(root==nullptr) {
        return nullptr;}
    
    if(curr==dep-1){
        TreeNode* templ=root->left;
        TreeNode*tempr=root->right; //store krdiya baad ke liye ;;?
        root->left=new TreeNode(val);
        root->right=new TreeNode(val); //new wale add kr diye //

        root->left->left=templ;
        root->right->right=tempr; //new walo ke left and right child fit kr diye //
        return root;
        }
    solve(root->left,val,dep,curr+1); //agr na mile tog traverse krte rhe 
    solve(root->right,val,dep,curr+1);
    return root;
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){ //phel wale ko left child banana h agr depth 1 h toh //
            TreeNode*RootNew=new TreeNode(val);
            RootNew->left=root;
            return RootNew;
        }
        int curr=1;
        return solve(root,val,depth,curr);
                
    }
};