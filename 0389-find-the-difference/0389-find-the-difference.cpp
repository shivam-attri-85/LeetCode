class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0;
        int b=0;
        for(auto &ch:s){
            a=a^ch;
        }
        for(auto &tch:t){
            b=b^tch;
        }
        return a^b;
    }
};