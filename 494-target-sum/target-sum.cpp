class Solution {
public:
int solve(int index,vector<int>&nums,int target,vector<vector<int>>&dp){
    if(index==nums.size()){
      return (target==0)?1:0;
    }
    if(dp[index][target]!=-1)return dp[index][target];
    int take=0;
    if(nums[index]<=target){
        take=solve(index+1,nums,target-nums[index],dp);
    }
    int nottake=solve(index+1,nums,target,dp);
    return dp[index][target]=take+nottake;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int total=0;
        for(auto val:nums){
            total=total+val;
        }
        if((total-target)<0||(total-target)%2)return 0;
int newtar=(total-target)/2;
int n=nums.size();
vector<vector<int>>dp(n,vector<int>(newtar+1,-1));
return solve(0,nums,newtar,dp);

    }
};