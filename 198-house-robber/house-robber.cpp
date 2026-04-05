class Solution {
public:
   int count(vector<int>&dp,int n,vector<int>&nums){
    if(n==0){
        return nums[0];
    }
    if(n==1){
        return max(nums[0],nums[1]);
    }
    if(dp[n]!=-1){
        return dp[n];
    }

        int pick = nums[n] + count(dp, n-2, nums);
        int notPick = count(dp, n-1, nums);

        return dp[n] = max(pick, notPick);
    }
   
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return count(dp,n-1,nums);
    }
};