class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>set(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<=n;i++){
            if(set.find(i)==set.end()){
                return i;
            }
        }
        return -1;
    }
};