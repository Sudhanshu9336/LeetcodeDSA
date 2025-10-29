class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
         unordered_map<int,int>map;
        int n=nums.size();
        int count=0;
       for(auto val:nums){
        int rem=k-val;
        if(map[rem]>0){
            map[rem]--;
            count++;
        }
        else {
            map[val]++;
        }
       }
        return count; 
    }
};
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         set<int>set;
//         int n=nums.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             int rem=k-nums[i];
//             if(set.find(rem)!=set.end()){
//                 set.erase(rem);
//                 count++;
//             }
//             else {
//                 set.insert(nums[i]);
//             }

//         }
//         return count;
//     }
// };