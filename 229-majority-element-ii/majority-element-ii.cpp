class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>map;
        int n=nums.size();
        int m=n/3;
        for(auto val:nums){
            map[val]++;
        }
        for(auto it:map){
            if(it.second>m)
          {
    ans.push_back(it.first);
            }     
       }
       return ans;

    }
};