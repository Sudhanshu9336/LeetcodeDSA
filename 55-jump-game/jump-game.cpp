class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
           maxi=maxi-1;
           maxi=max(maxi,nums[i]);
           if(maxi==0){
            if(i<n-1){
                return false;
            }
        
           }
        }
        return true;
    }
};