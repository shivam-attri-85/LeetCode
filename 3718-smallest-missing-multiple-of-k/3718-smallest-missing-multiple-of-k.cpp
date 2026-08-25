class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        int m=k;
        bool a=true;
        while(a){
            if(mp[m]!=1){
                return m;
                a=false;
            }
            m=m+k;
        }
    return m;
    }
};