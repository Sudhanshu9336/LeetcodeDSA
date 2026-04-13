class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int sum=0;
        while(i<n-1){
            int j=i+1;
            sum=sum+min(nums[i],nums[j]);
            i=i+2;
        }
        return sum;
    }
};