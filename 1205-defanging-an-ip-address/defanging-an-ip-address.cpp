class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(auto it:address){
            if(it=='.'){
                ans=ans+"[.]";
            }
            else {
                ans=ans+it;
            }
        }
        return ans;
    }
};