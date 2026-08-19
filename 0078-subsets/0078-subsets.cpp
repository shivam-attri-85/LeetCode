class Solution {
public:
vector<vector<int>>a;
//int i=0;
void solve (vector<int>nums,vector<int>res,int i){
    if(i>=nums.size()){
        a.push_back(res);
        return ;
    }
res.push_back(nums[i]);
solve(nums,res,i+1); //picked
res.pop_back();
solve(nums,res,i+1); //unpicked
return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        int i=0;
        solve(nums,res,i);
        return a;
    }
};