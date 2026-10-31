class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                s++;
            }}
            if(s==nums.size()){
                return 0;
            }
            int n=0;
            for(int i=nums.size()-1;i>=nums.size()-s;i--){
                if(nums[i]==0){
                    n++;
                }
            }
                return s-n;
        }
};