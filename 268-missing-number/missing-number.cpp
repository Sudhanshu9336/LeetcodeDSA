class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=0;
        int p=0;
        for(int i=0;i<=nums.size();i++){
            n=n^i;
            if(i<nums.size()){
                 p=nums[i]^p;
            }
           
        }
        return p^n;
    
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         set<int>set(nums.begin(),nums.end());
//         int n=nums.size();
//         for(int i=0;i<=n;i++){
//             if(set.find(i)==set.end()){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };