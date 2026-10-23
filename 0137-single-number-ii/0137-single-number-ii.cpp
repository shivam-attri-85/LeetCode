class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto n: nums){
            mpp[n]++;
        }
        for(auto ch:mpp){
            if(ch.second==1){
                return ch.first;
            }
        }
        return -1;
    }
};