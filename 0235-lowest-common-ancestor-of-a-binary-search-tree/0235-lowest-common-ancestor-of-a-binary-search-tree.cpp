/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* ans;
void solve(TreeNode* root,TreeNode*p ,TreeNode*q){
    if(root==nullptr){
        return;
    }

    if(root->val < p->val < q->val){
        solve(root->right,p,q);
    }
    if(p->val < q->val < root->val){
        solve(root->left,p,q);
    }
    if((root->val <= q->val &&root->val > p->val)||(root->val < q->val && root->val >= p->val)){
        ans=root;
        return;
        }
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr){
            return ans; 
        }
        // TreeNode*temp1;
        // TreeNode*temp2;
        if(p->val<q->val){
            solve(root,p,q);
        }
        else{
            solve(root,q,p);
        }
        // temp1=min(p->val,q->val); //chota h p
        // temp2=max(p->val,q->val);  //bda
        // solve(root,temp1,temp2);
        return ans;

    }
};