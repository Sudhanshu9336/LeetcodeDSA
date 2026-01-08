class Solution {
    public int missingNumber(int[] nums) {
        int n=0;
        int p=0;
       int m=nums.length;
       for(int i=0;i<m;i++){
         n=n^i;
            p=p^nums[i];
    }
    n=n^m;
    return p^n;
    }
}