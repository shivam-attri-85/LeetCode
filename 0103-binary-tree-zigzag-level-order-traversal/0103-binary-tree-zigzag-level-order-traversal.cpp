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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr){
            return res;
        }
        bool righttoleft=false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvlsize=q.size();
            vector<int>tmp(lvlsize);
            int f=0;
            int l=lvlsize-1;
            while(lvlsize--){
                TreeNode* t; 
                t=q.front();
                q.pop();
                if(righttoleft){
                    tmp[l]=t->val;
                    l--;
                }
                if(!righttoleft){
                    tmp[f]=t->val;
                    f++;
                }

                if(t->left!=nullptr)
                    q.push(t->left);
                
                if(t->right!=nullptr)
                    q.push(t->right);
            }
            res.push_back(tmp);
            righttoleft=1-righttoleft; //1->0 an 0->1 swape krne ke liye 
        }
        return res;
    }
};