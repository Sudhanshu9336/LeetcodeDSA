class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        unordered_set<int>set;
          int n=r*c;
          for(int i=1;i<=n;i++){
            set.insert(i);
          }
          int p;
          vector<int>arr;
          for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(set.count(grid[i][j])){
                    set.erase(grid[i][j]);
                }
                else{
                    p=grid[i][j];
                }
            }
          }
                int missing = *set.begin();
                arr.push_back(p);
arr.push_back(missing);

return arr;
          }
    
};