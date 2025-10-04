class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int n=height.size();
        int i=0;
        int r=n-1;
        while(i<=r){
          int m=min(height[i],height[r]);
          maxarea=max(maxarea,(r-i)*m);
          if(height[i]<=height[r]){
            i++;
          }
          else {
            r--;
          }
        }
       return maxarea; 
    }
};