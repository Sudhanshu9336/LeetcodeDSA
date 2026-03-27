class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int m=l+(r-l)/2;
            if(arr[m]<arr[m+1]){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return l;
    }
};

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n=arr.size();
//         for(int i=1;i<n-1;i++){
//             if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };