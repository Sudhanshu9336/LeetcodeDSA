class Solution {
public:

int solve(vector<int>&nums,int k){
    int n=nums.size();
    int l=0;
    int r=0;
    int count=0;
    unordered_map<int,int>map;
    while(r<nums.size()){
        map[nums[r]]++;
        while(map.size()>k){
            map[nums[l]]--;
            if(map[nums[l]]==0) map.erase(nums[l]);
            l++;
        }
        count=count+r-l+1;
        r++;
    }        
       
return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans=solve(nums,k)-solve(nums,k-1);
        return ans;
        
    }
};
// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             int j=i;
//             set<int>set;
//             while(set.size()<=k&&j<nums.size()){
//                 set.insert(nums[j]);
//                 if(set.size()==k){
//                     count++;
//                 }
//                 j++;
//             }

//         }
        
//         return count;
//     }
// };