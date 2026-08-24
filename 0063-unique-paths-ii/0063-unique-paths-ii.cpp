class Solution {
public:
long long int dp[1000][1000];
int cnt=0;
int solve(vector<vector<int>>&v,int m,int n,int i,int j){
if(i>=m ||j>=n){
    return 0;
}
if(v[i][j]==1){
    //dp[i][j]=0;
    return 0;  //obstacle
}
if(dp[i][j]!=-1){
    return dp[i][j];
}
if(i==m-1 && j==n-1){
    cnt++; //reahed destination
    return 1;
}
// int x=solve(v,m,n,i+1,j);
// int y=solve(v,m,n,i,j+1);
return dp[i][j]=solve(v,m,n,i+1,j)+solve(v,m,n,i,j+1);
// return dp[i][j];
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(); //rows
        int n=obstacleGrid[0].size();  //cols
        memset(dp,-1,sizeof(dp));
        if(obstacleGrid[0][0]==1){
            return 0;
        }
        else{
        int a= solve(obstacleGrid,m,n,0,0);
        return a;
        }
    }
};