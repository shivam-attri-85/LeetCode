class Solution {
public:
// set<vector<int>>v;
vector<vector<int>>a;
vector<int>res;
void solve(vector<int>& nums, int st) {
    a.push_back(res);
    for(int i=st;i<nums.size();i++) {
        if(i>st&& nums[i]==nums[i-1]) {
            continue;} // duplicate ko chodo  (Skip)

        res.push_back(nums[i]);
        solve(nums,i+1);
        res.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(nums,0);
        // vector<vector<int>>a(v.begin(),v.end());
        return a;
    }
};