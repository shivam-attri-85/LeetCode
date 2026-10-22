class Solution {
public:
    bool judgeSquareSum(int c) {
     long long int l=0;
     long long int r=sqrt(c);
     while(l<=r){
        long long int s=(l*l)+(r*r);
            if(s==c){
                return true;
            }
            else if(s<c){
                l++;
            }
            else{
                r--;
            }
            if(l>sqrt(c)+1){
                return  false; //race consdition bnadi vrna full ho jata sbkuch 
            }
            }
            return false;
    }
};