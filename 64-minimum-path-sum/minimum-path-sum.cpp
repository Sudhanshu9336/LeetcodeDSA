class Solution {
public:
int solve(int n,int m,vector<vector<int>>&grid,vector<vector<int>>&dp){
    if(n==0&&m==0)return grid[n][m];
    if(n<0||m<0)return INT_MAX;
    if(dp[n][m]!=0)return dp[n][m];
 int up = solve(n-1, m, grid, dp);
int left = solve(n, m-1, grid, dp);
int best = min(up, left);
// Agar dono side se path possible nahi hai, toh return INT_MAX
if(best == INT_MAX) return dp[n][m] = INT_MAX;

return dp[n][m] = grid[n][m] + best;

}
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        return solve(n-1,m-1,grid,dp);
    }
};