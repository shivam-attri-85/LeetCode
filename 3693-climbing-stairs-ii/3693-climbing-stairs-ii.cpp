class Solution {
public:
    vector<int>rev;
    int solv(int n,vector<int>&costs,int i){
        if (i==n) return 0;
        if (rev[i]!=-1) return rev[i];
        int c= costs[i]+1+ solv(n,costs,i+1);
        if (i+2<=n){
            c= min(c,costs[i+1]+4+solv(n,costs,i+2));}
        if (i+3<=n){
            c= min(c,costs[i+2]+9+solv(n,costs,i+3));
        } 
        return rev[i]=c;
    }
    int climbStairs(int n, vector<int>& costs) {
        rev=vector<int>(n+1,-1);
        return solv(n,costs,0);
    }
};