class Solution {
public:
  int largestRectangleArea(vector<int>& heights) {
        int area = 0;
        int n = heights.size();
        stack<int> st;
        vector<int> rightsmallerindex(n);
        vector<int> leftsmallerindex(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                rightsmallerindex[i] = n;
            } else {
               rightsmallerindex[i] = st.top();
            }
                st.push(i);
        }
        while (!st.empty()){
            st.pop();
        }
        for (int i = 0; i < n; i++) {
              while (!st.empty()&&heights[st.top()] >=heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                leftsmallerindex[i] = -1;
            }
            else {
                  leftsmallerindex[i]=st.top();  
            }
            st.push(i);
        }

        for (int i = 0; i < heights.size(); i++) {
            area = max(area, heights[i] * (rightsmallerindex[i]-leftsmallerindex[i]-1));
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxarea=0;
        vector<vector<int>>presum(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
             if(matrix[i][j]=='1'){
                sum=sum+1;
             }
             else {
                sum=0;
             }
             presum[i][j]=sum;
            }
             
        }
        for(int i=0;i<n;i++){
            int a=largestRectangleArea(presum[i]);
            maxarea=max(maxarea,a);
        }
        return maxarea;
      
    }
};