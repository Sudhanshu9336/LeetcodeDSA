class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        string ans="";
        for(auto ch:s){
            if(ch=='('){
            if(open>0){
                ans=ans+ch;
            }
            open++;
            }
            else{
                open--;
                if(open>0){
                    ans=ans+ch;
                }
            }
        }
        return ans;
    }
};