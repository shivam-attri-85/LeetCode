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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr){
            //cout <<"hi";
            return res;}
        queue<TreeNode*>q;
        q.push(root);
        stack<vector<int>>st;
        while(!q.empty()){
            int lvlsize=q.size();
            vector<int>tmp;
            while(lvlsize--){
            TreeNode* t=q.front();
            q.pop();
         //   if(t->val!=0){
            tmp.push_back(t->val);
          //  }
            if(t->left!=nullptr){
                q.push(t->left);
            }
            if(t->right!=nullptr){
                q.push(t->right);
            }
        }
        st.push(tmp);
    }
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
    }
};