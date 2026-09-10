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
TreeNode* ans=nullptr;
int LCA(TreeNode*root,TreeNode*p,TreeNode*q){
    if(root==nullptr){
        return 0;
    }
    int l=LCA(root->left,p,q);
    int r=LCA(root->right,p,q); 
    int khud=0; //vo abhikhud ka boss nhi h ;;
    if(root==p ||root==q){
        khud=1; //p and q khud ke bhi boss h
    }
    int total=l+r+khud;
    if(total==2 && ans==nullptr){
        ans=root; //mtlb pehle ans mil gya h new wale ko nhi lena recursion call neeche se judta aayega
    }
    return total;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root ==nullptr){
            return root; //surety h milega lekin ye accchhi practice h 
        }
        LCA(root,p,q);
        return ans;
    }
};