class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int first=INT_MAX;
       int sec=INT_MAX;
       for(auto val:nums){
        if(val<=first){
            first=val;
        }
         else if(val<=sec){
            sec=val;
        }
        else {
            return true;
        }
       }
       return false;
    }
};
// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]<nums[j]&&nums[j]<nums[k]){
//                         return true;
//                     }
//                 }
//             }
//         }
//         return false;
//     }
// };