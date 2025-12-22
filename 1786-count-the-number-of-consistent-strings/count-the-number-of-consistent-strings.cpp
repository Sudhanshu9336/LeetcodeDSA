class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> allowedSet(allowed.begin(), allowed.end());
        int count = 0;
        for (auto &word : words) {
            bool ok = true;
            for (char c : word) {
                if (allowedSet.find(c) == allowedSet.end()) {
                    ok = false;
                    break;
                }
            }
            if (ok) count++;
        }
        return count;
    }
};
