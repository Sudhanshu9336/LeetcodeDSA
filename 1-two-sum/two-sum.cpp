class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mapi;
        int t=target;
        for(int i=0;i<nums.size();i++){
            t=target;
            for(auto val:mapi){
                  int reman=t-nums[i];
                if(val.first==reman){
                    return {i,val.second};
                }
            }
            mapi[nums[i]]=i;
        }
        return {};
    }
};