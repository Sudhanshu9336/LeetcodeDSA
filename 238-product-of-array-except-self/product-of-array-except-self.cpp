class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        int count=0;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            if(nums[i]!=0){
            pro=pro*nums[i];
            }
            
        }
        if(count>1)return ans;
        if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=pro;
                }
            }
        }
      else {
        for(int i=0;i<nums.size();i++){
            ans[i]=pro/nums[i];
        }
      }
      return ans;
    }
};