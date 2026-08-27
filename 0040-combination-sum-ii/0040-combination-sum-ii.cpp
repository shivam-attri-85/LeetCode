class Solution {
public:
vector<vector<int>> res;
vector<int>r;
void solve(vector<int>&can,int tar,int idx,int s){
    if(tar<0) {
        return;}

    if(tar==0){
        res.push_back(r);
        return;
    }
    for(int i=idx;i<can.size();i++){  //pehle ko duara nhi lena isiliye idx se chalu kiya h 
        if(i>idx&&can[i]==can[i-1]){
            //duplicatemil gya
            continue; //skip krdiya 
        }
        r.push_back(can[i]); //pick kr liya
        solve(can,tar-can[i],i+1,s); //backtrack
        r.pop_back(); //baps undo
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int idx=0;
        solve(candidates,target,idx,0);
        return res;
    }
};