class Solution {
public:
// int n;
bool palin(string &str,int i,int idx,int n){
    if(str.length()==1){
        return true;
    }
    int s=idx;
    int e=i;
    while(s<e){
        if(str[s]!=str[e]){
            return false; }
        s++;
        e--;
    }
    return true;
}

void solve(string &s,int idx,int n,vector<string>&res,vector<vector<string>>&v){
if(idx==n){
    v.push_back(res);
    return ;
}
for(int i=idx;i<s.length();i++){
    if(palin(s,i,idx,n)){
        res.push_back(s.substr(idx,i-idx+1)); //substring function wants initails and length 
        solve(s,i+1,n,res,v);
        res.pop_back();
    }
}
// return;
}
    vector<vector<string>> partition(string s) {
        // string temp="";
        int idx=0;
        int n=s.length();
        vector<vector<string>>v;
        vector<string>res;
        solve(s,0,n,res,v);
        return v;
    }
};