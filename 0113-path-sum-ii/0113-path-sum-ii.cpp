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
vector<vector<int>>v;
vector<int>res;
void solve(TreeNode* root,int tar,int sum){
    if(root==nullptr){
        return ;
    }
    sum=sum+root->val;
    res.push_back(root->val);
    if(root->left==nullptr && root->right==nullptr){  //root to leaf path tabhi aayega jb left right null honge;;
        if(sum==tar){
            v.push_back(res); //mei yha baar baar ek ko milte hi ret5urn kr rha hu 
            //leki  aisa mughe mhi kkrna
        }
    }
    solve(root->left,tar,sum);
    solve(root->right,tar,sum);
     sum-=root->val;
    res.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum,0);
        return v;
    }
};