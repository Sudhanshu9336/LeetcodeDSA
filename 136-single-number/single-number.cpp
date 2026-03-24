class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int p=0;
        for(auto x:nums){
            p=p^x;
        }
        return p;
    }
};