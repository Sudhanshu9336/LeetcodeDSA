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
};

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n=heights.size();
//         int maxarea=0;
//         for(int i=0;i<n;i++){
//             int minheight=heights[i];
//             for(int j=i;j<n;j++){
//                 minheight=min(minheight,heights[j]);
//                 int width=j-i+1;
//                 int area=width*minheight;
//                 maxarea=max(maxarea,area);
//             }
//         }
//         return maxarea;
//     }
// };