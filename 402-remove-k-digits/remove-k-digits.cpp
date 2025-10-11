class Solution {
public:
    string removeKdigits(string num, int k) {
         string result = "";
        int n = num.size();
        if (n == k) return "0";
   
    
        stack<char> st;
     for (char digit : num) {
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
         while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
     
        while (!st.empty()) {
         result.push_back(st.top()); 
            st.pop();
        }
        reverse(result.begin(),result.end());
       int i = 0;
while (i < result.size() && result[i] == '0') {
    i++;
}
if (i == result.size()) return "0"; 

     return result.substr(i);
    }
};