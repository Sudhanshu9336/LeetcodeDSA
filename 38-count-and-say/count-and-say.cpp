class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";

        for (int step = 2; step <= n; step++) {
            string p = "";
            int count = 1;

            for (int i = 1; i < ans.size(); i++) {
                if (ans[i] == ans[i - 1]) {
                    count++;
                } else {
                    p += to_string(count) + ans[i - 1];
                    count = 1;
                }
            }

         p += to_string(count) + ans.back();
            ans = p;
        }
        return ans;
    }
};
