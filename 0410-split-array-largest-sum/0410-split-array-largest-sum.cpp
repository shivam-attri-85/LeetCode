class Solution {
public:
bool valid(vector<int>&nums,int k,int l,int h,int mid,int total){
    int subarr=1;
    int sum=0;
    int i=0;
    while(i<nums.size()){
        if(sum+nums[i]>mid){
        sum=nums[i];
        subarr++;

    if(subarr>k){
        return false;}
    }
    else{
        sum+=nums[i];
    }
    i++;
    }
        // while(sum<=mid && i<nums.size()){
            // sum+=nums[i];
            // i++;
        // }
    // else{
    return true;
// }
}

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int ma=nums[0];
        int total=0;
        for(int i=0;i<n;i++){
            ma=max(ma,nums[i]);
            total+=nums[i];
        }
        int l=ma;
        int h=total;
        int mid;
        int ans=INT_MAX;
        while(l<=h){
            mid=l+(h-l)/2;
            if(valid(nums,k,l,h,mid,total)){
                ans=min(ans,mid);
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};