class Solution {
public:
int countt(vector<int>&nums,int k){
    int l=0;
    int r=0;
    int sum=0;
    int count=0;
    while(r<nums.size()){
        sum=sum+nums[r];
        while(sum>k){
            sum=sum-nums[l];
            l++;
        }
        count=count+(r-l+1);
        r++;
    }
    return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        int ans=countt(nums,k)-countt(nums,k-1);
        return ans;
    }
};