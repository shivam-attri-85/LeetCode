class Solution {
public:
// int m,n;
vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
bool find(string &word,vector<vector<char>>&board,int i,int j,int idx,int m,int n){

    if(idx==word.length()) //agr idx last tk pahunch gya mtlb vo letter mil gya 
        return true; //hr word ke liye one by one check kr rhe h ;;
    
    if(i<0||j<0||i>=m||j>=n||board[i][j]=='#'){
        return false; //mtlb meri sari bound out condition and already visited character ko bhi nhi lena 
    }
    if(board[i][j]!=word[idx]){
        return false; //agr mera board ka letter word se match nhi kiya mtlb gdbd h 
    }
    char temp=board[i][j]; //hm letter by letter jaa rhe h agr koi mila h toh use temp me daal denge waps aate samay use hm visited se nikal denge ;;
    board[i][j]='#'; //alreadyb  visites h;;

    for(auto &it:dir){
        if(find(word,board,i+it[0],j+it[1],idx+1,m,n))
        return true;
    }
    // find(word,board,i,j+1,idx++); //right side
    // find(word,board,i,j-1,idx++);
    // find(word,board,i+1,j,idx++);
    // find(word,board,i-1,j,idx++);
    // return true;
    board[i][j]=temp;
    return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && find(word,board,i,j,0,m,n)){
                    return true ;
                //board mei word ka pehla letter mila toh mtlb hm sahi raste pr h 
                //and vo word ke sare letter mil gye toh mje hi mje  
                }
            }
        }
        return false;
    }
};