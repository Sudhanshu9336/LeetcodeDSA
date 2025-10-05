class Solution {
public:
    vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};
    
    void dfs(vector<vector<int>>& heights, int i, int j, vector<vector<int>>& ocean){
        int n = heights.size();
        int m = heights[0].size();
        if(i<0 || i>=n || j<0 || j>=m || ocean[i][j]) return;
        ocean[i][j] = 1;
        for(auto d : dir){
            int ni = i + d[0];
            int nj = j + d[1];
            if(ni>=0 && ni<n && nj>=0 && nj<m && heights[ni][nj] >= heights[i][j])
                dfs(heights, ni, nj, ocean);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> result;
        if(heights.empty() || heights[0].empty()) return result;

        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> pacific(n, vector<int>(m, 0));
        vector<vector<int>> atlantic(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            dfs(heights, i, 0, pacific);
            dfs(heights, i, m-1, atlantic);
        }
        for(int j=0;j<m;j++){
            dfs(heights, 0, j, pacific);
            dfs(heights, n-1, j, atlantic);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j] && atlantic[i][j])
                    result.push_back({i,j});
            }
        }

        return result;
    }
};
