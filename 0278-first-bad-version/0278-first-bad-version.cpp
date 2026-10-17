// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    //   vector<bool>v;
    //   for(int i=0;i<n;i++){
    //     v.push_back(isBadVersion(i+1));
    //   }  
    //   for(int i=0;i<n;i++){
        // cout <<v[i];
    //   }
    //   if(v.size()==1){
        // return 1;
    //   }
      int s=0;
      int e=n-1;
      int mid;
      int ans=-1;
      while(s<=e){
        mid=s+(e-s)/2;
        if(isBadVersion(mid+1)){
            ans=mid+1;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
      }
      return ans;
    }
};