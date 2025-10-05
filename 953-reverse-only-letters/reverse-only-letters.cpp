class Solution {
public:
    string reverseOnlyLetters(string s) {
    
        vector<char>ans;
     for (char c : s) {
            if (isalpha(c)) { 
                ans.push_back(c);
            }
        }
        reverse(ans.begin(),ans.end());
        int j=0;
      for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                s[i] = ans[j++];
            }
        }
        return s;
        
    }
};