class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int dis=0;
        int ans=0;
        set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int m=i;m<=j;m++){
                    s.insert(nums[m]);
                }
            dis=s.size();
            ans+=pow(dis,2);

            }
            s.clear();
        }
    return ans;
    }
};