class Solution {
public:
int res=0;
void solve(vector<int>&nums,int k,int idx,unordered_map <int,int>&mp){
    if(idx>=nums.size()){
        res++;
        return ;
        }
    if(!mp[nums[idx]-k] &&!mp[nums[idx]+k]){
        mp[nums[idx]]++;
        solve(nums,k,idx+1,mp);
        // res++;
        mp[nums[idx]]--;
    }
    solve(nums,k,idx+1,mp);
    // return;
}
int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map <int,int>mp;
        int idx=0;
        // for(auto e:nums){
        //     mp[e]++;
        // }
        solve(nums,k,idx,mp);
        return res-1;
    }
};