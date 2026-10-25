class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int cnt=0;
       for(int i=0;i<k;i++){
        if(blocks[i]=='W'){
        cnt++;}
       }
       int n=blocks.size();
       int mini=cnt;
       for(int i=k;i<n;i++){
        if(blocks[i-k]=='W') cnt--;
        if(blocks[i]=='W') cnt++;
        mini=min(mini,cnt);
       } 
     return mini;  
    }
};