class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>col;
        for(int j=0;j<m;j++){
            int maxi=0;
            for(int i=0;i<n;i++){
                maxi=max(maxi,matrix[i][j]);
            }
            col.push_back(maxi);
        }
            for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(matrix[i][j]==-1){
                  matrix[i][j]=col[j];
                }
            }
        }
        return matrix;
        
    }
};