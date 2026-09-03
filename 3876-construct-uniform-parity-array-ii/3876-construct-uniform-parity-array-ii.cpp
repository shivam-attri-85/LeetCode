class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(nums1.size()==1){
            return true;
        }
        int so=0;
        int se=0;
        int miniodd=INT_MAX;
        int minieven=INT_MAX;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                se++;
                minieven=min(nums1[i],minieven);
                }
            if(nums1[i]%2!=0){
                so++;
                miniodd=min(nums1[i],miniodd);
            }
        }
        
        if(se==n||so==n){
            return true;
        }

        else{
            if(miniodd<minieven){
                return true;
            }
            return false;
        }

    }
};