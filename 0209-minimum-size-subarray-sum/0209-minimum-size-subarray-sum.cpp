class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=0;
        int low=0;
        int high =0;
        int sum=0;
        int res=INT_MAX;
        while(high<nums.size()){
            
            sum=sum+nums[high];
            
        //firing ;
        while(sum>=target){
            len = high-low+1;
            res=min(res,len);
            sum=sum-nums[low];
            low++;
        }
        //hiring
        high++;
        }
        if(res==INT_MAX){
            return 0;
        }
        return res;
    }
};