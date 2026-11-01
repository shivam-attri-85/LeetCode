class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=nums[0];
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
            s+=nums[i];
        }
        return s-n*mini;
    }
};