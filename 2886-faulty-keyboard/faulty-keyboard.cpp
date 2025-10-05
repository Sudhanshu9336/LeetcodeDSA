class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(auto ch:s){
            if(ch=='i'){
                reverse(ans.begin(),ans.end());
            }
            else {
                ans=ans+ch;
            }
        }
        return ans;
        
    }
};