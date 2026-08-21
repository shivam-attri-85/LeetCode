class Solution {
public:
int c=0;
long long int dp[1001][1001];
long long int solve(int m,int n,long long int i,long long int j){
if(dp[i][j]!=-1){
    return dp[i][j];
}
if(i==m-1&&j==n-1){
    c++;
    return 1; 
}
if(i==m-1||j==n-1){
   c++;
    return 1;
}
dp[i][j]=solve(m,n,i+1,j)+solve(m,n,i,j+1);
return dp[i][j];

}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        long long ans=solve(m,n,0,0);
        return ans;
    }
};