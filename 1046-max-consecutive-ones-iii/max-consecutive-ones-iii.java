class Solution {
    public int longestOnes(int[] nums, int k) {
        int maxc=0;
        int l=0;
        int n=nums.length;
        int r=0;
        int count=0;
        while(r<n){
                 if(nums[r]==0){
                count++;
            }
            
            while(count>k){
                if(nums[l]==0){
                    count--;
                }
                l++;
            }
            maxc=Math.max(maxc,r-l+1);
            r++;
        }
        return maxc;
    }
}