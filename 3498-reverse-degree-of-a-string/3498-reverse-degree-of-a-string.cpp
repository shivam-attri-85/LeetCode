class Solution {
public:
    int reverseDegree(string s) {
        // int pro=0;
        int k=26;
        vector<int>v(27);
        for(int i=0;i<27;i++){
            v[i]=k;
            k--;
        }
        int sum=0;
        for(int i=0;i<s.size();i++){
            int idx=s[i]-97; //index in v 
            cout <<"idx "<<idx<<"value in vec"<<v[idx];

            // v[idx]; //reverse value nikali vector se a ke liye 26 jaise ;;
            sum+=v[idx]*(i+1);
            cout <<"sum "<<sum<<"\n";
        }
    return sum;
    }
};