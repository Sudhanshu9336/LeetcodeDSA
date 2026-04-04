class Solution {
public:
void fill(vector<vector<int>>& image, int i, int j,int o, int c){
    int n=image.size();
    int m=image[0].size();
    if(i<0||i>=n||j<0||j>=m){
        return ;
    }
    if (image[i][j] != o){
        return ;
    }
        

        // fill color
        image[i][j] = c;
    fill(image,i+1,j,o,c);
    fill(image,i-1,j,o,c);
    fill(image,i,j+1,o,c);
    fill(image,i,j-1,o,c);
   
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor=image[sr][sc];
        if(oldcolor==color){
            return image;
        }
         fill(image,sr,sc,oldcolor,color);
         return image;
        
    }
};