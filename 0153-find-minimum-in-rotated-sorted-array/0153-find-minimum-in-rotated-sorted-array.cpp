class Solution {
public:
    int findMin(vector<int>& nums) {
        int r=nums.size()-1;
        int l=0;
        int mid;
        int ans;
        while(l<r){
            mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1; //mid se toh chota milega 
            }
            else{   //if(arr[mid]<arr[r])  mid bhi smallest ho skta h array me toh include krlo
               r=mid;  
                ans=nums[r];
            }
        }
        return nums[r];
    }
};