class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        int n=grid.size();
        int m=grid[0].size();
        int jump=0;
        int total=n*m;
        bool right=true;
        for(int i=0;i<n;i++){
            if(i%2==0){
         for(int j=0;j<m;j++){
           ans.push_back(grid[i][j]);
          }
        }
        else {
            for(int j=m-1;j>=0;j--){
                ans.push_back(grid[i][j]);
            }
        
        }
        }
        vector<int>result;
        for(int i=0;i<ans.size();i=i+2)
         result.push_back(ans[i]);
         return result;
        
    }
};