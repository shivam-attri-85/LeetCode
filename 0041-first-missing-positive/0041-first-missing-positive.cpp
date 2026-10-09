class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        
        int gt=max(maxi,n);

        gt=min(100000,gt);

        vector<int>fr(gt+1,0);
        for(int i=0;i<n;i++){

        if(nums[i]>0 && nums[i]<=100000){
            fr[nums[i]]=1;
        }
        }
        int m=gt+1;
        for(int i=1;i<m;i++){
            if(fr[i]==0){
                return i;
            }
        }
        return n+1;
    }
};