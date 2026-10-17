class Solution {
public:
    vector<int>v;
    void first(vector<int>&nums,int t,int n){
        int s=0;
        int e=n-1;
        int ans=-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(t==nums[mid]){
                ans=mid;
                e=mid-1;
            }
            else if(t<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

    }
    v.push_back(ans);
    }
    void last(vector<int>&nums,int t,int n){
        int s=0;
        int e=n-1;
        int ans=-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(t==nums[mid]){
                ans=mid;
                s=mid+1;
            }
            else if(t<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }        
            }
        v.push_back(ans);    
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        first(nums,target,n);
        last(nums,target,n);
        return v;
    }
};