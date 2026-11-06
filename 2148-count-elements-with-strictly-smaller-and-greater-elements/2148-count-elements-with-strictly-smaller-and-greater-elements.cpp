class Solution {
public:
    int countElements(vector<int>& nums) {
        int mi,ma=nums[0];
        for(int i=0;i<nums.size();i++){
            mi=min(mi,nums[i]);
            ma=max(ma,nums[i]);
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mi && nums[i]<ma){
                cout<<nums[i]<<" ";
                c++;
            }
        }
        return c;
    }
};