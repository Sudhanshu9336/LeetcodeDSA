class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
           vector<vector<int>>result;
           if(n==0)return {};
           sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                end=max(intervals[i][1],end);
            }
            else{
             result.push_back({start,end});
             start=intervals[i][0];
            end=intervals[i][1];

            }
        }
           result.push_back({start,end});
        return result;
    }
};