class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>map;
        map[0]=1;
        int presum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            presum=presum+nums[i];
            if(map.count(presum-k)){
                count=count+map[presum-k];
            }
            map[presum]++;
        }
        return count;
    }
};
