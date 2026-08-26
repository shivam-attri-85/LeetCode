class Solution {
public:
int cnt=0;
// int val=0;
int dp[101][5000];
//observation .for dp memorize krni h hme vrna tle aajayega 
//hme ptah ki apna val negative bhi jaa rha h and apne nums [i] ki value 1000 h rogh ye -1000 ae 1000 tk jayega toh hme dp me val ko +1000 krna hop memorizagtion ke liye chliye krte h 
int solve(vector<int>&nums,int t,int idx,int n,int val){
if(idx>=n){
    if(t==val){
        cnt++;
        return 1;
    }
    return 0;
}
// if(idx>=n && t!=val){                  val
     //                                  /   \
   //                                 +x       -x
      //                              /         \
    //                             recurse[val+x]     recurse[val-x]  mei pehle yha val krr ha tha sirf isiliyue 2 baar kiya ....
    // return ;
// }
if(dp[idx][val+2000]!=-1){
    return dp[idx][val+2000];
}
cout << idx << " "<< val<<"   " ;
int a = solve(nums,t,idx+1,n,val+nums[idx]);
// val-=temp;
// val=val-nums[idx];  
// val=val-nums[idx];
int b=solve(nums,t,idx+1,n,val-nums[idx]);
// val=val+nums[idx];
return dp[idx][val+2000]=a+b;
}
int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int val=0;
        cnt=0;
        int i=0;
        memset(dp,-1,sizeof(dp));
        return solve(nums,target,i,n,val);
        
    }
};