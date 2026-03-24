class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minval=nums[0];
        int maxi=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>minval){
                maxi=max(maxi,nums[i]-minval);
            }
            else{
             minval = nums[i];
            }
        }
return maxi;
    }
};



// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         int n = nums.size();
//         int maxi = -1;

//         for(int i = 0; i < n - 1; i++) {
//             for(int j = i + 1; j < n; j++) {
//                 if(nums[j] > nums[i]) {
//                     maxi = max(maxi, nums[j] - nums[i]);
//                 }
//             }
//         }
//         return maxi;
//     }
// };