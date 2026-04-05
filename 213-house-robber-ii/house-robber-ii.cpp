class Solution {
public:
int count(vector<int>&dp,int i,int start,vector<int>&nums){
if(i==start){
return nums[start];
}
if(i==start+1){
    return max(nums[i],nums[i-1]);
}
if(dp[i]!=-1){
    return dp[i];
}
int pick=nums[i]+count(dp,i-2,start,nums);
int notpick=count(dp,i-1,start,nums);
return dp[i]=max(pick,notpick);

}
    int rob(vector<int>& nums) {
         int n = nums.size();

        if(n == 1) return nums[0];  
        vector<int> dp1(n, -1);
        int case1 = count(dp1, n-2, 0, nums);
        vector<int> dp2(n, -1);
        int case2 = count(dp2, n-1, 1, nums);

        return max(case1, case2);
    }
};