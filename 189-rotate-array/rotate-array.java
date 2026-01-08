class Solution {
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        int []arr=new int[n];
        for(int i=0;i<n;i++){
            int p=(i+k)%n;
            arr[p]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
}