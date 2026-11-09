class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>fr(101,0);
        for(int i=0;i<nums.size();i++){
            fr[nums[i]]++;
        }

        int cnt=0;
        for(int i=0;i<=100;i++){
            if(fr[i]==1){
                cnt+=i;
            }
        }
        return cnt;
    }
};