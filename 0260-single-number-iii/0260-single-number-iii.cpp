class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>v;
        for(auto ele:mpp){
            if(ele.second==1){
                v.push_back(ele.first);
            }
        }
        return v;
    }
};