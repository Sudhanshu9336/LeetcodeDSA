class Solution {
public:
    bool find(vector<vector<char>>& board, int i, int j, int indx, string& word) {
        if (indx == word.size()) return true;

        int n = board.size();
        int m = board[0].size();

        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[indx])
            return false;

        char ch = board[i][j];
        board[i][j] = '#'; // mark as visited

        bool result=find(board, i + 1, j, indx + 1, word)||
        find(board, i, j + 1, indx + 1, word)||
        find(board, i - 1, j, indx + 1, word)||
        find(board, i, j - 1, indx + 1, word);

        board[i][j] = ch; // backtrack
        return result;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0] && find(board, i, j, 0, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};