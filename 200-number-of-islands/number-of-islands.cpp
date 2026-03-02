class Solution {
public:

    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vise){
        vise[row][col] = 1;

        queue<pair<int,int>> q;
        q.push({row,col});

        int n = grid.size();
        int m = grid[0].size();

        int directionrow[] = {-1, 0, 1, 0};
        int directioncol[] = {0, 1, 0, -1};

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nrow = r + directionrow[i];
                int ncol = c + directioncol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
                   grid[nrow][ncol]=='1' && vise[nrow][ncol]==0){

                    vise[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
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
                    bfs(i,j,grid,vise);
                }
            }
        }
        return count;
    }
};