class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int left=0;
        int range=0;
        while(range<nums.size()-1){
            int far=0;
          for(int i=left;i<=range;i++){
            far=max(far,nums[i]+i);
          }
          left=range+1;
          range=far;
          jumps++;
        }
        return jumps;
    }
};