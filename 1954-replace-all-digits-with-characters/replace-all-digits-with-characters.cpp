class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans = ans + s[i];
            } else {
                char shifted = ans.back() + (s[i] - '0');
                ans = ans + shifted;
            }
        }
        return ans;
    }
};
