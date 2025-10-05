class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans="";
        stringstream ss(s);
        while(ss>>word){
            reverse(word.begin(),word.end());
            if(ans==""){
                ans=ans+word;
            }
            else{
                ans=ans+" "+word;
            }
         

        }
        return ans;
    }
};