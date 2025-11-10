class Solution {
public:
    string decodeString(string s) {
        vector<int> ans;
        stack<char> st;
        int num = 0; 
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');  // handle multi-digit number
            }
            else if (s[i] == '[') {
                ans.push_back(num);
                num = 0;
                st.push(s[i]);
            }
            else if (s[i] == ']') {
                string re = "";
                while (!st.empty() && st.top() != '[') {
                    re = st.top() + re;
                    st.pop();
                }
                if (!st.empty()) st.pop(); 

                int repeatCount = ans.back();
                ans.pop_back();

                string repeated = "";
                for (int j = 0; j < repeatCount; j++) {
                    repeated += re;
                }
                if (st.empty()) {
                    result += repeated;
                } 
                else {
                    for (char c : repeated) {
                        st.push(c);
                    }
                }
            }
            else {
                if (st.empty())
                    result += s[i];
                else
                    st.push(s[i]);
            }
        }

        string temp = "";
        while (!st.empty()) {
            temp = st.top() + temp;
            st.pop();
        }

        result += temp;
        return result;
    }
};
