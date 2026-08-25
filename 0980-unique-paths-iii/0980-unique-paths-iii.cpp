class Solution {
public:
vector<vector<int>>dir={{1,0},{0,1},{-1,0},{0,-1}};
// int dp[100][100];
// int cnt=0;
// int obs=0;
// int res=0;
void solve(vector<vector<int>>& grid,int i,int j,int m,int n,int &obs,int &res,int cnt){
    if(i>=m||j>=n||i<0||j<0 || grid[i][j]==-1){
        return ;
    }
    // if(i>=m||j>=n){
        // return 0;
    // }
    // if(grid[i][j]==-1){
    //     return;
    // }
    if(grid[i][j]==2){  //mil gya
        if(cnt==obs){
            res++;}
        return;
        }

    grid[i][j]=-1;
    for(auto &di:dir){
        // int i1=i+di[0];
        // int j1=j+di[1];
        solve(grid,i+di[0],j+di[1],m,n,obs,res,cnt+1);
        // solve(grid,i1,j1,m,n,obs,res,cnt+1);
    }
    grid[i][j]=0;
    // int a=solve(grid,i+1,j,f1,f2,m,n);
    // int b=solve(grid,i-1,j,f1,f2,m,n);
    // int c=solve(grid,i,j+1,f1,f2,m,n);
    // int d=solve(grid,i,j-1,f1,f2,m,n);
    
}
    int uniquePathsIII(vector<vector<int>>& grid) {
        int s1=0;
        int s2=0;
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        int obs=0;
        int cnt=0;
        // memset(dp,-1,sizeof(dp));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    s1=i;
                    s2=j;
                }
                if(grid[i][j]==0){
                    obs++;
                }
            }
        }
        obs+=1; //no obstacle 
        solve(grid,s1,s2,m,n,obs,res,cnt);
        return res;
    }
};