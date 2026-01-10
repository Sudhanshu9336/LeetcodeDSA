class Solution {
    public int longestConsecutive(int[] nums) {

        if(nums.length == 0) return 0;

        Arrays.sort(nums);
        int n = nums.length;
        int maxc = 1;
        int i = 0;

        while(i < n){
            int j = i + 1;
            int count = 1;

            while(j < n){
                if(nums[j] == nums[j - 1]){ 
                    j++;
                }
                else if(nums[j] == nums[j - 1] + 1){ 
                    count++;
                    j++;
                }
                else{
                    break;
                }
            }

            maxc = Math.max(maxc, count);
            i = j;
        }
        return maxc;
    }
}
