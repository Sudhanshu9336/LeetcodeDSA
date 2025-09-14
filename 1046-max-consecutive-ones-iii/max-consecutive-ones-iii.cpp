// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxl=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int count=0;
//             for(int j=i;j<n;j++){
//                 if(nums[j]!=1)count++;
//                 if(count>k)break;
//                 int le=j-i+1;
//                 maxl=max(maxl,le);
//             }
//         }
//         return maxl;
//     }
// };

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int count=0;
        int maxi=INT_MIN;
        while(r<nums.size()){
            
             if(nums[r]==0 ){
                count++;
             }
                while(count>k){
                    if(nums[l]==0){
                    
                     count--;
                    }
                    l++;
                }
            
            
                maxi=max(maxi , r-l+1);
                
            
             r++;
        }
        return maxi;
        
    }
};