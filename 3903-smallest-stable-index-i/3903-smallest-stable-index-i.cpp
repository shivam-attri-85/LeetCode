class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x= *max_element(nums.begin(),nums.begin()+i);
            int y=*min_element(nums.begin()+i,nums.begin()+n);
            if(x-y<=k){
                ans=min(ans,i);
                return ans;
            }

        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
    }
};