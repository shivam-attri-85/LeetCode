class Solution {
public:
// double powr(double n,double t){
// //       if(t==0) return 1.0;
// //   if(t<0){
// //      return 1.0/n*powr(n,t+1);
// //     // return (1.0/n*powr(n,t+1)*1e5)/1e5;
// //   }
// //       return (n*powr(n,t-1));
// // }
    double myPow(double x, int n) {
//      double ans=powr(x,n);
//      ans = (ans * 1e5) / 1e5;
//         return ans;
double a=pow(x,n);
return a;
    }
    
};