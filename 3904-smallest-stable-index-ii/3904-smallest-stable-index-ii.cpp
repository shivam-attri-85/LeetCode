class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // for(int i=0;i<nums.size();i++){
        //     int a=*max_element(nums.begin(),nums.begin()+i);
        //     int b=*min_element(nums.begin()+i,nums.begin()+nums.size());
        //     if(a-b<=k){
        //         return i; 
        //     }
        // }
        // return -1;

        // using 2nd aproach frefix sum and suffix sum 
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],nums[i]);
            // cout <<pre[i]<<" ";
        }
        cout <<'\n';
        for(int i=n-2;i>=0;i--){
            suf[i]=min(suf[i+1],nums[i]);
            // cout <<suf[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(pre[i]<=suf[i]+k){
                return i;
            }
        }
        return -1;
    }

};