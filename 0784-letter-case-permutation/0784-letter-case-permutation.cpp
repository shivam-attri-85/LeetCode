class Solution {
public:
vector<string>v;
void solve(string ip,string op){
    if(ip.length()==0){ 
    v.push_back(op);
    return; }
    if(isalpha(ip[0])){
        string op1=op;
        string op2=op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
        return;
    }
    else{
        string op3=op;
        op3.push_back(ip[0]); //isme number jayega;;
        ip.erase(ip.begin()+0);
        solve(ip,op3);
        return;
    }
}
    vector<string> letterCasePermutation(string s) {
        string op="";
        solve(s,op);
        return v;
    }
};