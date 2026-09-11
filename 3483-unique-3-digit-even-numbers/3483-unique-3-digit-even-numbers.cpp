class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int,int>mpp;
        for(auto &it:digits){
            mpp[it]++;
        }
        set<int>s;
        int num;
        int n=digits.size();
        // set<int>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(digits[k]%2==0 && digits[i]!=0){
                            mpp[digits[k]]--;
                            mpp[digits[j]]--;
                            mpp[digits[i]]--;
                            if(mpp[digits[k]]>=0 &&mpp[digits[j]]>=0&&mpp[digits[i]]>=0){
                                num=digits[i]*100+digits[j]*10+digits[k];
                                cout <<num<<" ";
                                s.insert(num);
                                }
                                mpp[digits[i]]++;
                                mpp[digits[j]]++;
                                mpp[digits[k]]++;
                    }
                }
            }
        }
        return s.size();
    }
};