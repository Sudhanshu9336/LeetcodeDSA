class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
      unordered_map<int, int> map;
        for (auto val : nums) {
            map[val]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:map){
            pq.push({it.second,it.first});
        }
    while(k>0&&!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
    }
    return ans;
    }
};