class Solution {
public:
    int trap(vector<int>& height) {
        int left[20001];
        int right[20001];
       left[0]=height[0];
        int n=height.size();
        right[n-1]=height[n-1];//last ko banyee rkha ;ast and first pr kbhi pani nhi aayega 
       int maxi=height[0];
       // left[0]=maxi;
        for(int i=1;i<n;i++){
            maxi=max(height[i],left[i-1]);
            left[i]=maxi;
            //left[i]=max(left[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        int water=0;
        for(int i=1;i<n;i++){
            cout<<left[i]<<" "<< right[i]<<"   ";
        water = water + min(right[i],left[i])-height[i];
    }
    return water;
    }
};