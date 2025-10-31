class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> row, col;

        for (int i = 0; i < n; i++) {
            vector<int> ans;
            for (int j = 0; j < n; j++) {
                ans.push_back(grid[i][j]);
            }
            row.push_back(ans);
        }
        for (int i = 0; i < n; i++) {
            vector<int> ans;
            for (int j = 0; j < n; j++) {
                ans.push_back(grid[j][i]);
            }
            col.push_back(ans);
        }
        multiset<vector<int>> s(row.begin(), row.end());
        int count = 0;
        for (auto &it : col) {
            count += s.count(it);
        }
        return count;
    }
};
