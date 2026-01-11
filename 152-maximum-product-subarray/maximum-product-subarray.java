class Solution {
    public int maxProduct(int[] nums) {
        int pre=1;
        int suf=1;
        int n=nums.length;
        int maxc=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(pre==0){
                pre=1;
            }
            if(suf==0){
                suf=1;
            }
            pre=pre*nums[i];
            suf=suf*nums[n-i-1];
          
            maxc=Math.max(maxc,Math.max(pre,suf));
        }
        return maxc;
    }
}


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int product=nums[0];
//         int minpro=nums[0];
//         int maxpro=nums[0];
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<0){
//                 //swap is liye kar rahe hai kyu ki negative ka multipliacation jub maxnumber se hoga toh wah aur bhi samll hoga and jub min number ka multiplication negative number se hoga toh wah samjh rahe ho na;
//                 swap(maxpro,minpro);
//             }
//             minpro=min(nums[i],minpro*nums[i]);
//             maxpro=max(nums[i],maxpro*nums[i]);
//             product=max(maxpro,product);
//         }
//         return product;
//     }
// };