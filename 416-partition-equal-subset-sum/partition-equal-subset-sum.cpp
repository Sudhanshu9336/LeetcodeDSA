class Solution {
public:
bool solve(int i,vector<int>&num,vector<vector<int>>&dp,int target){
    if(target==0)return true;
    if(i>=num.size()){
        return false;
    }
    if(dp[i][target]!=-1){
        return dp[i][target];
    }
    bool take=false;
    if(num[i]<=target){
        take=solve(i+1,num,dp,target-num[i]);
    }
    bool nottake=solve(i+1,num,dp,target);
    return dp[i][target]=take||nottake;

}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(auto val:nums){
            sum=sum+val;
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(0,nums,dp,target);
    }
};