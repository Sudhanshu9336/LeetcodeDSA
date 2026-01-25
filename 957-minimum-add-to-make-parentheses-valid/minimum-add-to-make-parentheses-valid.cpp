class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>set;
        for(auto ch:s){
            if(set.empty()){
                set.push(ch);
            }
           else if(set.top()=='(' && ch==')'){
                set.pop();
            }
           else if(set.top()==')'&&ch=='('){
                set.push(ch);
            }
            else{
                set.push(ch);
            }
        }
        return set.size();
    }
};