class Solution {
public:
vector<vector<int>> v;
vector<int>res;
void solve(int k,int t,vector<int>&vis,int s,int i){
if(res.size()==k){
    if(s==t){
        v.push_back(res);
        }
    return ;
    }
if(i==10) return ;
if(s>t) return ;

res.push_back(i);
s+=i;
solve(k,t,vis,s,i+1);
s-=i;
res.pop_back();
 //ignr
 solve(k,t,vis,s,i+1);

}
    vector<vector<int>> combinationSum3(int k, int n) {
        int s=0;
        vector<int>vis(10,0);
        int i=1;
        solve(k,n,vis,s,i);
        // vector<vector<int>>a(v.begin(),v.end());
        return v;
    }
};