class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // 1) Count frequency
        for (char c : s) {
            freq[c]++;
        }

        // 2) Find first unique in original order
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        // 3) If none found
        return -1;
    }
};
