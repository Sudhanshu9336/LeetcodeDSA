 bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[1] < b[1];
}


class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
           if(intervals.empty()) return 0;
        int count=1;
        int n=intervals.size();
    sort(intervals.begin(), intervals.end(), cmp);
    int last=intervals[0][1];
    for(int i=1;i<n;i++){
        if(intervals[i][0]>=last){
            count++;
            last=intervals[i][1];
        }
    }
    return n-count;
        
    }
};