class Solution {
public:
void dfs(vector<vector<int>>& image,vector<vector<int>>&ans, int sr, int sc, int color,int drow[],int dcol[],int initialc){
    ans[sr][sc]=color;
    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++){
        int nrow=sr+drow[i];
        int ncol=sc+dcol[i];
        if(nrow>=0 &&ncol>=0 &&ncol<m && nrow<n&& image[nrow][ncol]==initialc && ans[nrow][ncol]!=color ){
            dfs(image,ans,  nrow, ncol, color,drow,dcol,initialc);
        }
    }
}


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialcolor=image[sr][sc];
        int row=image.size();
        int col=image[0].size();
        vector<vector<int>>ans=image;
        int drow[]={1,0,-1,-0};
        int dcol[]={0,1,0,-1};
      dfs(image,ans,sr,sc,color,drow,dcol,initialcolor);
      return ans;
    }
};