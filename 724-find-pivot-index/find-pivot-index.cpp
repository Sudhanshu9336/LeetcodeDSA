class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum=totalsum+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(leftsum==totalsum-leftsum-nums[i])
            {
                return i;
            }
            leftsum=leftsum+nums[i];
        }
        return -1;
        
    }
};