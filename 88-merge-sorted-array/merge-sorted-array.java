class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=m;
        for(int k=0;k<n;k++){
            nums1[i]=nums2[k];
            i++;
        }
        Arrays.sort(nums1);
    }
}