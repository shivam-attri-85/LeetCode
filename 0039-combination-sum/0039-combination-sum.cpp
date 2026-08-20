class Solution {
public:
    vector<vector<int>>a;
    int s=0;
    void slv(vector<int>&c,int t,int i,vector<int>&res){
       if(t==0){
       a.push_back(res);
        return ;
       }
       if(t<0||i>=c.size()){
        return;
       }
       res.push_back(c[i]);
       slv(c,t-c[i],i,res);//inc..
       res.pop_back();
       slv(c,t,i+1,res);  //exc..
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>res;
        int i;
        slv(candidates,target,i=0,res);
        return a;
    }
};