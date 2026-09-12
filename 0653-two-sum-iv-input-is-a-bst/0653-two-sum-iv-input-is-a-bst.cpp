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
vector<int>v;
void display(){
    for(int i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
    cout <<"\n";
}

void inorder(TreeNode*root){
    if(root==nullptr)
    return;
    inorder(root->left);
    v.push_back(root->val);
    // cout <<root->val <<" ";
    inorder(root->right);
}

bool solve(int k){
int i=0;
int j=v.size()-1;

while(i<j){
    if(v[i]+v[j]<k){
        i++;
    }
    else if(v[i]+v[j]>k){
        j--;
    }
    // if(v[i]+v[j]==k){
    else
       return true;
    
}
return false;
}
    bool findTarget(TreeNode* root, int k) {
        inorder(root);

        // display();
        // bool a=false;
        return solve(k);
    }
};