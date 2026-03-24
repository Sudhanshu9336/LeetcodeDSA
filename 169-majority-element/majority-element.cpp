class Solution {
public:
    int majorityElement(vector<int>& nums) {
              int n=nums.size();
        unordered_map<int,int>map;
        for(auto val:nums){
            map[val]++;
        }
        for(auto it:map){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    
    }
};