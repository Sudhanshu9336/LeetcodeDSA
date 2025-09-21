class Solution {
public:
bool solve(int index,vector<int>&nums,int target,vector<vector<int>>&dp){
       if(target==0)return true;
       if(index>=nums.size())return false;
       if(dp[index][target]!=-1) return dp[index][target];
   
    bool take=false;
    if(nums[index]<=target){
     take=solve(index+1,nums,target-nums[index],dp);
}
    bool nottake=solve(index+1,nums,target,dp);
    return dp[index][target]=(take||nottake);

    }

    bool canPartition(vector<int>& nums){
        int n=nums.size();
        int sum=0;
        for(auto val:nums){
            sum=sum+val;
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(0,nums,target,dp);
    }
};

//recursion time limit maar dega marega 
// class Solution {
// public:
// bool solve(int index,vector<int>&nums,int target){
//        if(target==0)return true;
//       if(index==nums.size()-1){
//         return nums[index]==target;
//     }
//     bool take=false;
//     if(nums[index]<=target){
//      take=solve(index+1,nums,target-nums[index]);
// }
//     bool nottake=solve(index+1,nums,target);
//     return take||nottake;

//     }

//     bool canPartition(vector<int>& nums){
//         int n=nums.size();
//         int sum=0;
//         for(auto val:nums){
//             sum=sum+val;
//         }
//         if(sum%2!=0)return false;
//         return solve(0,nums,sum/2);
//     }
// };