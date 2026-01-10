class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr;
        int n=numRows;
        for(int i=0;i<n;i++){
            vector<int>result(i+1,1);
            for(int j=1;j<i;j++){
                result[j]=arr[i-1][j-1]+arr[i-1][j];
            }
            arr.push_back(result);
        }
        return arr;
    }
};