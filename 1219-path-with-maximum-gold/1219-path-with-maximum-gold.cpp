class Solution {
public:
// vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
int solve(vector<vector<int>>& grid,int n,int m,int i,int j,int maxi){
    if(i>=n||j>=m ||i<0||j<0||grid[i][j]==0){
        return 0;
    }

    // if(grid[i][j]!=0){
    //     maxi=maxi+grid[i][j];
    //     maxi=max(maxi,grid[i][j]);
    // }
    int temp=grid[i][j];
    grid[i][j]=0;
    int maxG=0;


    // for(auto &dir :dir){
    //     int ans=solve(grid,n,m,i+dir[0],j+dir[1],maxi);
    //     maxG=max(maxG,ans);
    // }
    int a=solve(grid,n,m,i+1,j,maxi);
    maxG=max(maxG,a);
    int b=solve(grid,n,m,i-1,j,maxi);
     maxG=max(maxG,b);
    int c=solve(grid,n,m,i,j+1,maxi);
     maxG=max(maxG,c);
    int d=solve(grid,n,m,i,j-1,maxi);
    maxG=max(maxG,d);
    grid[i][j]=temp;
    return temp+maxG;

}
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxi=0;
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    int mGold=solve(grid,n,m,i,j,maxi);
                    maxi=max(maxi,mGold);
                }
            }
        }
        return maxi;
    }
};