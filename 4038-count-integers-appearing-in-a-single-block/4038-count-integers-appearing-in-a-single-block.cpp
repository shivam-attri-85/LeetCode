class Solution {
public: 
    int countSpecialIntegers(vector<int>& nums) {
       if(nums.size()==1) return 1;
       int cnt =0;
       int f=-1;
       int l=-1;
    unordered_map<int,int>mp;
    for(auto el:nums){
        mp[el]++;
    }
    for(auto &p:mp){
            int val=p.first;
            int f=-1,l=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==val){
                    if(f==-1) {f=i;}
                    l=i;
                }
            }
            if(l-f+1==p.second){
                cnt++;}
        }
        return cnt;
    }
};