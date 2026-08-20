class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;

        for(int i=0;i<nums.size();i++){
            if(i==0) arr1.push_back(nums[i]);
            if(i==1) arr2.push_back(nums[i]);
            if(i>1){
                if(arr1.back()>arr2.back()){
                    arr1.push_back(nums[i]);
                }
                else{
                    arr2.push_back(nums[i]);
                }
            }
        }
        vector<int>v;
        for(int i=0;i<arr1.size();i++){
            v.push_back(arr1[i]);
        }
        for(int j=0;j<arr2.size();j++){
            v.push_back(arr2[j]);}
        return v;
    }
};