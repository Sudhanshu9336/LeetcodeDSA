class Solution {
public:
int findingsum(vector<int>&nums,int g){
    int presum=0;
    int l=0;
    int r=0;
    int count=0;
    while(r<nums.size()){
        if(g<0)return 0;
        presum=presum+nums[r];
       while(presum>g){
        presum=presum-nums[l];
        l++;
       }
       count=count+(r-l+1);
       r++;
    }
    return count;

}

    int numSubarraysWithSum(vector<int>& nums, int goal) {
    int result=findingsum(nums,goal)-findingsum(nums,goal-1);
    return result;
    }
};