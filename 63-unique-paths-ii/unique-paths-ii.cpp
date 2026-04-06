class Solution {
public:
int ans(int i,int j,int r,int c,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp){
    
   
    if(i>r||j>c){
        return 0;
    }
    if(obstacleGrid[i][j]==1){//obsatcle dikhega toh return kar dunga ki path he nahi hai aage 0 aur obstacle destination se pahle check karna
        return 0;
    }
    if(dp[i][j]!=-1){//main cheej toh yahi hai na
        return dp[i][j];
    }
     if(i==r&&j==c){
        return 1;
    }
    
    int right=ans(i,j+1,r,c,obstacleGrid,dp);
    int doun=ans(i+1,j,r,c,obstacleGrid,dp);
    return dp[i][j]=right+doun;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return ans(0,0,m-1,n-1,obstacleGrid,dp);
    }
};