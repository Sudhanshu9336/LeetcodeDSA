class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans;
        stringstream ss(s);
        while(ss>>word){
            if(ans==""){
                ans=ans+word;
            }
            else {
                ans=" "+ans;
                ans=word+ans;
            }
        }
        return ans;
    }
};