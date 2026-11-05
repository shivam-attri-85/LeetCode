class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int a=arr2.size();
        int cnt=0;
        int fl;
        for(int i=0;i<arr1.size();i++){
            fl=0;
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    fl=1;
                }
            }
            if(fl==0){
                cnt++;
            }
        }
        return cnt;
    }
};