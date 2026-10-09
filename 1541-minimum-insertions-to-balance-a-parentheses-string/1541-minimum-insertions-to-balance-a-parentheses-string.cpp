class Solution {
public:
    int minInsertions(string s) {
        int ans = 0, tmp = 0;
        for(auto &i : s) {
            if(i == '(') {
                ans++;
                if(ans & 1) ans++;
                else tmp++;
            } else {
                if(ans < 1) ans++, tmp++;
                else ans--;
            }
        }
        return ans + tmp;
    }
};