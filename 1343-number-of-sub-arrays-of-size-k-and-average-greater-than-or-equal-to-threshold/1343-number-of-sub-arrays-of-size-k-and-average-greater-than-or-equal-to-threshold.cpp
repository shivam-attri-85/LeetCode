class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int cnt=0;
        double avg=sum/k;
        if(avg>=threshold){
            cnt++;
        }
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            if(sum/k>=threshold){
                cnt++;
            }
        }
        return cnt;
    }

};