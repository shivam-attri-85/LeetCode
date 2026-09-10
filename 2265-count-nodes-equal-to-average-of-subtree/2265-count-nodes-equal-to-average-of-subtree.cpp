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
int cnt=0;
void solve(TreeNode*root,int &tsum,int &tcnt){
    if(root==nullptr){
        tsum=0;
        tcnt=0;
        return;
    }
    int lsum,lcnt;
    int rsum,rcnt;
    lsum=0;
    lcnt=0;
    rsum=0;
    rcnt=0;
    solve(root->left,lsum,lcnt);
    solve(root->right,rsum,rcnt);
    int total=lsum+rsum+root->val;
    int count=lcnt+rcnt+1;
    int avg=total/count;
    if(avg==root->val){
        cnt++;
    }
    tsum=total;
    tcnt=count;
}
    int averageOfSubtree(TreeNode* root) {
        int tsum=0;
        int tcnt=0;
        if(root==nullptr){
            return 0;
        }

        solve(root,tsum,tcnt);
        return cnt;
    }
};