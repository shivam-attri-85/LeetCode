class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int ans=n;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(target==nums[mid]){
                ans=mid;
                return mid;
            }
            else if(target<nums[mid]){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
return ans;
    }
};