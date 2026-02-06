class Solution {
public:
  int count = 0;
     bool issafe(vector<string>& board, int row, int col, int n) {
        for(int i = 0; i < n; i++){
            if(board[i][col] == 'Q') return false;
        }
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){
            if(board[i][j] == 'Q') return false;
        }
        for(int i = row, j = col; i >= 0 && j < n; i--, j++){
            if(board[i][j] == 'Q') return false;
        }
        return true;
    }
      void nqueen(vector<string>& board, int row, int n) {
        if(row == n){
            count++;        
            return;
        }
       for(int col = 0; col < n; col++){
            if(issafe(board, row, col, n)){
                board[row][col] = 'Q';
                nqueen(board, row + 1, n);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
           vector<string> board(n, string(n, '.'));
            nqueen(board, 0, n);
            return count;

    }
};