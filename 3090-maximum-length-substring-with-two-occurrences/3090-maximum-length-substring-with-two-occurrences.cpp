class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int l=0;
        int res=0;
        unordered_map<char,int> fr;
        for(int i=0;i<n;i++){
            fr[s[i]]++;
        
            while(fr[s[i]]>2){
                fr[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};