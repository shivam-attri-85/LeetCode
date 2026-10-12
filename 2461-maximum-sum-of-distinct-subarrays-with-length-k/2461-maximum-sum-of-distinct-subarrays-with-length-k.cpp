class Solution {
public:
// bool check(vector<int>&nums,int i,int k,set<int>&s){
//     // set<int>s;
//     s.clear();
//     for(int j=i-k+1;j<=i;j++){
//         s.insert(nums[j]);
//     }
//     if(s.size()==k){
//         return true;
//     }
//     return false;
// }
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long sum=0;
        int n=nums.size();
        // set<int>s;
        // set<int>sl;
        unordered_map<int,int>mpp;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mpp[nums[i]]++;
            // s.insert(nums[i]);
        }
        if(mpp.size()==k){
            ans=sum;
        }
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            mpp[nums[i-k]]--;
            mpp[nums[i]]++;
            if(mpp[nums[i-k]]==0){
                mpp.erase(nums[i-k]);
            }
            if(i>k-1 &&mpp.size()==k){
            ans=max(sum,ans);
        }
        }
        return ans;
    }
};