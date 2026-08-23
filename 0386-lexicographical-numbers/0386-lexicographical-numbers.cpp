class Solution {
public:
vector<int>ans;
void solve(int n,int i){
    if(i>n){
        return;
    }
    ans.push_back(i);
    for(int andr=0;andr<10;andr++){
        int abbnalaxico=i*10+andr;
           //yha abbnalaxico 10,11,12,13,110,120 ke liye h 
        if(abbnalaxico>n){
            return;
        }
        solve(n,abbnalaxico);
       // return;
    }
}
    vector<int> lexicalOrder(int n) {
            for(int i=1;i<10;i++){
                int num=i;
                solve(n,num);
            }
            return ans;
    }
};