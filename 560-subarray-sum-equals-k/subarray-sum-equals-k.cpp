class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int presum=0;
        int count=0;
        for(auto val:nums){
            presum=presum+val;
            if(map.count(presum-k)){
                count=count+map[presum-k];
            }
            map[presum]++;
        }
        return count;
    }
};