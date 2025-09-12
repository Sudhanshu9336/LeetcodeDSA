class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(auto c:s){
            if(st.empty()){
                st.push(c);
            }
            else{
                if(st.top()=='('&&c==')')st.pop();
                else if(st.top()==')'&&c=='(')st.push(c);
                else {
                    st.push(c);
                }
            }
        }
        return st.size();
    }
};