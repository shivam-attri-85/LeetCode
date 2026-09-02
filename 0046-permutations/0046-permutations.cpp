class Solution {
public:
vector<vector<int>>v;
vector<int>res;
void solve(vector<int>& nums,int n,vector<int>&vis){
    if(res.size()==n){
        v.push_back(res);
        return ;
    }

     for(int ch=0;ch<n;ch++){
        if(vis[ch]==1){
            continue;
        }
        res.push_back(nums[ch]);
        vis[ch]=1; //
        solve(nums,n,vis);
        vis[ch]=0;
        res.pop_back();
        // solve(nums,n,arr);
     }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        vector<int>vis(n,0);
        solve(nums,n,vis);
    return v;
    }
};