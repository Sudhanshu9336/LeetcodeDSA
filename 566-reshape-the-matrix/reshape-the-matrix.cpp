class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>arr(r,vector<int>(c));
        int n=mat.size();
        int m=mat[0].size();
          if(n*m!=r*c){
         return mat;
          }
          int idx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            arr[idx/c][idx%c]=mat[i][j];
            idx++;
            }
        }
        return arr;
    }
};