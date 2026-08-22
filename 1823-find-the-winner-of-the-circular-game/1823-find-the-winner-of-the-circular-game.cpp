class Solution {
public:
vector<int>v;
int w=-1;
void s(vector<int>&v,int n,int k,int curridx){
    n=v.size();
    if(n==1) { 
        w=v[0];
        return;}
    curridx=(curridx+k)%n;
    v.erase(v.begin()+curridx);
    s(v,n,k,curridx);
    // return (n-1,n-k%k)%k;}
    }
    int findTheWinner(int n, int k) {
        int fk=k-1;
        for(int i=0;i<n;i++) 
            v.push_back(i+1);
        int curridx=0;
        s(v,n,fk,curridx);
        return w;
    }
};