class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> ans;
        for (auto val : set1) { // iterate over set1 (unique elements)
            if (!set2.count(val)) {
                ans.push_back(val);
            }
        }

        vector<int> ans1;
        for (auto val : set2) { // iterate over set2 (unique elements)
            if (set1.find(val) == set1.end()) {
                ans1.push_back(val);
            }
        }

        return {ans, ans1};
    }
};
