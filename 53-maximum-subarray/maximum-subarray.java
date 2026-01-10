class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0;
        int maxc=Integer.MIN_VALUE;
        int n=nums.length;
        int j=0;
        while(j<n){
            sum=sum+nums[j];
            maxc=Math.max(maxc,sum);
            if(sum<=0){
                sum=0;
            }
            j++;
        }
        return maxc;
    }
}