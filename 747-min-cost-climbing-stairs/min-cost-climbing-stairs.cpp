// memoisation
// class Solution {
// public:
// int solve(vector<int>&cost,int n,vector<int>&dp){
//     //base case
// if(n==0){
//     return cost[0];
// }
// if(n==1){
//     return cost[1];
// }
// if(dp[n]!=-1){
//     return dp[n];
// }
// dp[n]= cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
// return dp[n];
// }
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//         vector<int>dp(n+1,-1);
//         int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
//         return ans;
//     }
// };
class Solution {
public:
    int solve(vector<int>& cost, int i, vector<int>& dp) {
        int n = cost.size();
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        int oneStep = cost[i] + solve(cost, i + 1, dp);
        int twoStep = cost[i] + solve(cost, i + 2, dp);

        dp[i] = min(oneStep, twoStep);
        return dp[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1);
        int ans = min( solve(cost, 0, dp),  solve(cost, 1, dp)  );
        return ans;
    }
};
