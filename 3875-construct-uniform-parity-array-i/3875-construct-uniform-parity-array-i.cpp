class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int se=0;
        int so=0;
        int sm=0;
        // vector<int >nums2(n);
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                se++;
            }
            if(nums1[i]%2!=0){
                so++;
            }
            if(se>0&&so>0){
                sm++;
            }
        }
        if(se==n||so==n) return true;  //sare even ya odd toh num2 odd ya even bn jayega
        if(sm>=1) return true; //agr koi mixed h toh even-odd ya odd-even krke odd banao and odd walo ko odd rehne do 
        return false;
    }
};