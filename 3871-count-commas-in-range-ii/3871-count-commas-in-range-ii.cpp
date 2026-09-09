class Solution {
public:
    long long countCommas(long long n) {
    long bda=999;
    long Sum=0;
        while(n>bda){
            Sum+=n-bda;
            bda=bda*1000+999;
        }

        return Sum;
    }
};