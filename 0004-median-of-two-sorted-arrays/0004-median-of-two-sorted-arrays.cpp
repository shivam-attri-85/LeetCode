class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>v(n+m);
        for(int i=0;i<n;i++){
            v[i]=nums1[i];
        }
        for(int i=0;i<m;i++){
            v[n+i]=nums2[i];
        }
        int s=0;
        int e=n+m-1;
        sort(v.begin(),v.end());
        double med;
        if((n+m)%2!=0){
            int mid=s+(e-s)/2;
        return double(v[mid]);
        }
        else{
            int mid=s+(e-s)/2;
            double an=double(v[mid]+v[mid+1])/2;
            return an;
        }
        
    }
};