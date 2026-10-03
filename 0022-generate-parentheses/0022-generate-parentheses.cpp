class Solution {
public:
vector<string>v;
string s="";
void solve(string s,int o,int c,int n){
    if(s.size()==n+n){
        v.push_back(s);
        return ;
    }
    // if(o==c && o<n){
    //     solve(s+"(",o+1,c,n);
    // }
    if(o<n){
        solve(s+"(",o+1,c,n);
    }
    if(c<o){
        solve(s+")",o,c+1,n);
    }
    // return;
}
    vector<string> generateParenthesis(int n) {
        string s="";
        int o=0;
        int c=0;
        solve("",o,c,n);
        return v;
    }
};