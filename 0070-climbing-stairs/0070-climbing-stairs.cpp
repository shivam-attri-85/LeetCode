class Solution {
public:
int dp[101];
int w(int n){
        if(n==1||n==0) return 1;
        if(dp[n]!=-1) return dp[n];
        if(n<=0) return 0;
        return dp[n]=w(n-1)+w(n-2);
}
int climbStairs(int n) {
memset(dp,-1,sizeof(dp));
return w(n);

    }
};