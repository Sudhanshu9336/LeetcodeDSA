
// //poora row mujhe pascals triangle banane ki jarurat nahi hai mujhe
// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//        vector<vector<int>>result;
//         int n=rowIndex;
//         for(int i=0;i<=n;i++){
//           vector<int>ans(i+1,1);
//           for(int j=1;j<i;j++){
//             ans[j]=result[i-1][j-1]+result[i-1][j];
//           }
//           result.push_back(ans);
//         }
//         return result[n];
        
//     }
// };


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);
        for (int i = 1; i < rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                row[j] = row[j] + row[j-1];
            }
        }
        return row;
    }
};
