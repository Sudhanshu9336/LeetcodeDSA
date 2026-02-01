class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        set<int>set;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(set.count(nums[i])){
                set.erase(nums[i]);
            }
            else{
                set.insert(nums[i]);
            }
        }
        for(auto val:set){
            return val;
        }
        return -1;
    }
};