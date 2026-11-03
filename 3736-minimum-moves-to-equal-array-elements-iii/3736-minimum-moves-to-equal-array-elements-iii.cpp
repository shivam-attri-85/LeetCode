class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a=0;
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            a+=abs(maxi-nums[i]);
        }
        return a;
    }
};