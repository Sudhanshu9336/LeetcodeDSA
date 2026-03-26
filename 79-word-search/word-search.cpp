class Solution {
public:
bool search(vector<vector<char>>&board,string word,int i, int j,int index){
    int r=board.size();
    int c=board[0].size();
    if(index==word.size()){
        return true;
    }
    if(i < 0 || j < 0 || i >= r || j >= c || board[i][j] != word[index]) {
            return false;
        }
      
    
    char temp=board[i][j];
    board[i][j]='#';
  
   bool up=search(board,word,i,j+1,index+1);
   bool down=search(board,word,i,j-1,index+1);
   bool left=search(board,word,i-1,j,index+1);
   bool right=search(board,word,i+1,j,index+1);
   board[i][j]=temp;
   return up||down||left||right;

}
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 if(search(board,word,i,j,0)){
                    return true;
                 }

            }
        }
    
        return false;
    }
};