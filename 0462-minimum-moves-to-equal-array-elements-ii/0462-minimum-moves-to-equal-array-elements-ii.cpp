class Solution {
public:
int sol(vector<int>&nums,int mid){
    int a=0;
    for(int i=0;i<nums.size();i++){
        a+=abs(mid-nums[i]);
    }
    return a;
}
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int med;
        int s=0;
        int e=nums.size();
        int mid=(s+(e-s)/2);
        if(n%2!=0){
            med=nums[mid];
        }
        else{
            med=(nums[mid-1]+nums[mid])/2;
        }
        cout << mid;
        int a=sol(nums,med);

        return a;
    }
};