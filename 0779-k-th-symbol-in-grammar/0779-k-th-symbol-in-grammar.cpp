class Solution {
public:
bool ans=0;
int solve(int n,int k){
    int mid=pow(2,n-1)/2;
    if (n==1&&k==1) 
        return 0;
    if(k<=mid){
        //isme exact same hi rhega jo n-1 me tha usi k pr;;
        ans = solve(n-1,k);
//        return solve(n-1,k);
    }
    if(k>mid){
       ans= !solve(n-1,k-mid);
       //return !solve(n-1,k-mid);

         //iska transpose krke isme n,k ke liye n-1 wala hi aayega bs k-mid hoga kyoki k wale me n-1 ka k-mid agr jaise n=4 ka chahiye toh usme k=5 pr jo n-1 me 5-4 =1 pr tha uska transpose 
}
return ans;
}
    int kthGrammar(int n, int k) {
        // replace 0-> 0 1
        // repplace 1-> 1 0
        return solve(n,k);
        }
};