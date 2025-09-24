class Solution {
public:
int solve(int n,int m,vector<vector<int>>&obs,vector<vector<int>>&dp){
  
    if(n<0||m<0)return 0;
    if(obs[n][m]==1)return 0;
      if(m==0&&n==0)return 1;
    if(dp[n][m]!=-1)return dp[n][m]; 
    int up=solve(n-1,m,obs,dp);
    int left=solve(n,m-1,obs,dp);
    return dp[n][m]=up+left;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
      return  solve(n-1,m-1,obstacleGrid,dp);
         
    }
};