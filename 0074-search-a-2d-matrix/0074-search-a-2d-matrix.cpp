class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       /*  matrix se krdiya 2d se 
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0;
        int j=c-1;
        while(i<r && j>=0){
            if(matrix[i][j]>target) //i,j bda h toh choti kro col-- krdo
                j--;
            else if(matrix[i][j]<target){  //hmari khoj me chote ele aaye row ++ krdo 
                i++;
            }
            else{ //mil gya 
                return true;
            }
            
        }
        return false;
        */
      //1D ki form me krte h 
      int s=0;
      int r=matrix.size();
      int c=matrix[0].size();
      int e=r*c-1;
      int mid;
      while(s<=e){
        int mid=s+(e-s)/2;
        if(matrix[mid/c][mid%c]<target){
            s=mid+1;
        }
        else if(matrix[mid/c][mid%c]>target){
            e=mid-1;
        }
        else{
            return true;
                }
      }
      return false;

    }
};