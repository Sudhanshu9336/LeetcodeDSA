class Solution {
public:

    void dfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vise){
        int n = grid.size();
        int m = grid[0].size();
         if(row < 0 || row >= n || col < 0 || col >= m ||
           grid[row][col] == '0' || vise[row][col] == 1){
            return;
        }

         vise[row][col] = 1;
           dfs(row-1, col, grid, vise); // up
              dfs(row+1, col, grid, vise); // down
                dfs(row, col-1, grid, vise); // left
                  dfs(row, col+1, grid, vise); // right
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vise(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vise[i][j]==0 && grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid,vise);
                }
            }
        }
        return count;
    }
};