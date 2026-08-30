class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    int ans=1;
    int n=nums.size();
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int mini=nums[0];
    int maxi=nums[0];
    int idx1=0;
    int idx2=0;
    for(int i=0;i<n;i++){
        if(nums[i]>maxi){
            maxi=nums[i];
            idx2=i; //max elemetn uindex;
        }
        if(nums[i]<mini){
            mini=nums[i];
            idx1=i;
        }
    }
   // idx1++;
    //idx2++;
    int maxidx=max(idx1,idx2);
    int minidx=min(idx1,idx2);
    return min(min(maxidx+1,n-minidx),n-maxidx+minidx+1);
    }
};