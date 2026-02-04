class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row;
        vector<int> col;

        // Row minimum
        for (int i = 0; i < n; i++) {
            int mini = INT_MAX;
            for (int j = 0; j < m; j++) {
                mini = min(mini, matrix[i][j]);
            }
            row.push_back(mini);
        }

        // Column maximum
        for (int j = 0; j < m; j++) {
            int maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                maxi = max(maxi, matrix[i][j]);
            }
            col.push_back(maxi);
        }
        
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == row[i] && matrix[i][j] == col[j]) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};
