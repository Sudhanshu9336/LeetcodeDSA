class Solution {
public:
int subarray(vector<int>&nums,int goal){
    int count=0;
    int r=0;
    int sum=0;
    int l=0;
    while(r<nums.size()){
        if(goal<0)return 0;
        sum=sum+nums[r];
        while(sum>goal){
            sum=sum-nums[l];
            l++;
        }
        count=count+(r-l+1);
        r++;
       
    }
     return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int result=subarray(nums,goal)-subarray(nums,goal-1);
        return result;
    }
};