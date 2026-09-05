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
    int maxLevelSum(TreeNode* root) {
        vector<int>maxi;
        int max=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int lvlsize=q.size();
            vector<int>tmp(lvlsize);
            int sum=0;
            while(lvlsize--){
                TreeNode* t=q.front();
                q.pop();
                sum+=(t->val);
                if(t->left!=nullptr){
                    q.push(t->left);
                }
                if(t->right!=nullptr){
                    q.push(t->right);
                }
            }
            maxi.push_back(sum);
        }
        int i=0;
        int ans=0;
        int maxim_ele=INT_MIN;
        for(auto &it :maxi){
            if(it>maxim_ele){
                maxim_ele=it;
                ans=i;
            }
            cout <<it<<" "<<i<<"  ";
            i++;
        }

    return ans+1;        
    }
};