class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int>seti;
    for(auto val:nums){
        seti.insert(val);
    }
     nums.assign(seti.begin(),seti.end());
    return seti.size();
    }
};