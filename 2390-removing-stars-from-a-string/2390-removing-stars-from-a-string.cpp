class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char c:s){
            if(c!='*'){
                st.push(c);
            }
            else{
                if(!st.empty()){
                st.pop();}
            }
        }

    string fin="";
    while(!st.empty()){
        fin+=st.top();
        st.pop();
    }
    reverse(fin.begin(),fin.end());
    return fin;
    }
};