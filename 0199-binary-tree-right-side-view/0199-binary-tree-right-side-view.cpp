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
    vector<int> rightSideView(TreeNode* root) {
        int s=0;
        vector<int>res;
        if(root==nullptr){
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int lvlsz=q.size();
            // int gt=lvlsz;
            TreeNode* lastNd=nullptr;
            // cout <<gt<<" ";
            vector<int>tmp;
            while(lvlsz--){
                TreeNode*t=q.front();
                q.pop();
                tmp.push_back(t->val);
                if(t->left!=nullptr){
                    q.push(t->left);
                }
                if(t->right!=nullptr){
                    q.push(t->right);
                }
                lastNd=t;
                }
                res.push_back(tmp.back());
                // res.push_back(lastNd->val);

            }
        return res;
        }
    
};