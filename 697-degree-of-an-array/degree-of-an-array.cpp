class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
           unordered_map<int,int>map;
           unordered_map<int,int>first;
           unordered_map<int,int>last;
            for(int i=0;i<nums.size();i++){
           int x=nums[i];
           map[x]++;
           if(!first.count(x)){
            first[x]=i;
           }
            last[x]=i;
     }
     int d=0;
     for(auto it:map){
        d=max(d,it.second);
     }
     int ans=nums.size();
     for(auto &p:map){
        if(p.second==d){
            ans=min(ans,last[p.first]-first[p.first]+1);
        }
     }
     return ans;

    }
};