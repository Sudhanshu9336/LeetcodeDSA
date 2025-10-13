class Solution {
public:
bool can(vector<int>&arr,int start ,vector<int>&visited){
    if(start<0||start>=arr.size()||visited[start]) return false;
    if(arr[start]==0)return true;
    visited[start]=1;
    return can(arr,start+arr[start] ,visited)|| can(arr,start-arr[start],visited);
}
    bool canReach(vector<int>& arr, int start) {
           vector<int> visited(arr.size(), 0);
        return can(arr,start,visited);
    }
};