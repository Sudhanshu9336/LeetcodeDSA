class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans(nums.size());
        int n=nums.size();
        int k=0;
        int j=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[k]=nums[i];
                k=k+2;
            }
            else {
               ans[j]=nums[i];
               j=j+2;
            }
        }
        return ans;
        
    }
};