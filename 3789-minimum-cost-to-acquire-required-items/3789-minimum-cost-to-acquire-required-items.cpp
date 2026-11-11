class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
      if(cost1+cost2<=costBoth){
        return (1LL*cost1*need1)+(1LL*cost2*need2);
      }  
        int b=min(need1,need2);
        long long tot=1LL*b*costBoth;
            need1=need1-b;
            need2=need2-b; 
        
        if(need1>0){
            int c1=min(costBoth,cost1);
            tot+=1LL*need1*c1;
        }
        else if(need2>0){
            int c2=min(costBoth,cost2);
            tot+=1LL*need2*c2;
            }
        
    return tot;
    }
    
};