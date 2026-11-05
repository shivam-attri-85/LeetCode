class Solution {
public:
    bool sear(vector<vector<int>>&mat,int ta,int i,int j){
        int s=0;
        int e=j-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mat[i][mid]>ta){
                e=mid-1;
            }
            else if(mat[i][mid]<ta){
                s=mid+1;
            }
            else{
                return  true;
            }
        }
        return false;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
        if(sear(matrix,target,i,c)){
            return true;
        }    
        }
        return false;
    }
};