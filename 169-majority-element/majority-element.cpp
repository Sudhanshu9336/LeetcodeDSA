class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto val:nums){
            map[val]++;
        }
        // priority_queue<pair<int,int>>pq;
        // for(auto it:map){
        //     pq.push({it.second,it.first});
        // }
        // return pq.top().second;
        int m=nums.size()/2;
        for(auto it:map){
            if(it.second>m){
                return it.first;
      }
        }
        return -1;
    }
};