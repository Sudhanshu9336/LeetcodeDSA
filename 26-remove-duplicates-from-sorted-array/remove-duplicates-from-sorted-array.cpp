
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int>seti(nums.begin(),nums.end());
     nums.assign(seti.begin(),seti.end());
    return seti.size();
    }
};