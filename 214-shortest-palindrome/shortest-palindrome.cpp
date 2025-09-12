class Solution {
public:
    int LPS(string& s) {
        int n = s.size();
        vector<int> len(n, 0);
        int pre = 0;
        int suf = 1;
        while (suf < n) {
            if (s[pre] == s[suf]) {
                pre++;
                len[suf] = pre;
                suf++;
            } else {
                if (pre != 0) {
                    pre = len[pre - 1];
                } else {
                    len[suf] = pre;
                    suf++;
                }
            }
        }
        return len[n - 1];
    }
    string shortestPalindrome(string s) {
        int n = s.size();
        string rev = s;
        reverse(rev.begin(), rev.end());
        string p = s + "#" + rev;

        int len = LPS(p);
        string temp = s.substr(len);
        reverse(temp.begin(), temp.end());
        string l=temp;
        return l + s;
    }
};