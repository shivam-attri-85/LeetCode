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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        queue<TreeNode*>q;
        double cnt=0;
        q.push(root);
        while(!q.empty()){
            int lvl=q.size();
            vector<int>tmp;
            double s=0;
            while(lvl--){
                TreeNode* t=q.front();
                q.pop();
                cnt++;
                s+=t->val;
                if(t->left!=nullptr){
                    q.push(t->left);
                }
                if(t->right!=nullptr){
                    q.push(t->right);
                }
            }
            res.push_back((double)s/cnt);
            cnt=0;
            s=0;
        }
        return res;
    }
};