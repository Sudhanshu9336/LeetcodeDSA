class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto it:nums){
            if(it%2!=0){
                continue;
            }
            else{
                map[it]++;
            }
        }
        int most=-1;
        int ma=0;
        for(auto it:map){
      int num=it.first;
      int count=it.second;
      if(count>ma||(count==ma&&num<most)){
        ma=count;
        most=num;
      }
        }
        return most;
        
    }
};