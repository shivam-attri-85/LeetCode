class Solution {
public:
vector<vector<int>>a;
void solve(int i,int k,vector<int>&v,vector<int>&res,int n){
    if(i>=n){
        if(res.size()==k){
        a.push_back(res);
        return;}
        return;
    }
    // vector<int>res1=res;
    // vector<int>res2=res;
    // res2.push_back(v[i]);
    // solve(i+1,k,v,res1,n);
    // solve(i+1,k,v,res2,n);

    res.push_back(v[i]);//ismr include kr liya kya bbar aar alga banaunga 
     solve(i+1,k,v,res,n);
    res.pop_back();//isme se excluse kr diya res2 wala kaam kr diya 
    solve(i+1,k,v,res,n);
    //return;
}
    vector<vector<int>> combine(int n, int k) {
     vector<int>v;
     for(int i=1;i<=n;i++){
        v.push_back(i);
     }   
     vector<int>res;
    //  int j=0;
     solve(0,k,v,res,n);
     return a;
    }
};