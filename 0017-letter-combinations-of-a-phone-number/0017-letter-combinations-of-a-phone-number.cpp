class Solution {
public:
vector<string>res;
void solve(int idx,string dig,unordered_map<char,string > &mpp,string temp){
    if(idx>=dig.length()){
        res.push_back(temp);
        return ;
    }
    char ch=dig[idx]; //kya h digit 
    string str=mpp[ch]; //ab digit ke corrsponding cheej map me aa gyi h ;; "abc"

        temp.push_back(str[0]);
        solve(idx+1,dig,mpp,temp);
        temp.pop_back();
        temp.push_back(str[1]);
        solve(idx+1,dig,mpp,temp);
        temp.pop_back();
        temp.push_back(str[2]);
        solve(idx+1,dig,mpp,temp);
        temp.pop_back();
        if(str.size()==4){
        temp.push_back(str[3]);
        solve(idx+1,dig,mpp,temp);
        temp.pop_back();
        }
        // solve(idx+1,dig,mpp,temp);
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string > mpp;
        mpp['2']={"abc"};
        mpp['3']={"def"};
        mpp['4']={"ghi"};
        mpp['5']={"jkl"};
        mpp['6']={"mno"};
        mpp['7']={"pqrs"};
        mpp['8']={"tuv"};
        mpp['9']={"wxyz"};
        int idx=0;
        string temp="";
        solve(idx,digits,mpp,temp);
        return res;
    }
};