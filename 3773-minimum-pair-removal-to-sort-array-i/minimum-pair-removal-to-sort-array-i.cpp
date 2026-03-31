class Solution {
public:
bool notsorted(vector<int>&nums){
    
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}
    int minimumPairRemoval(vector<int>& nums) {
        int operation=0;
        while(!notsorted(nums)){
             int minsum=INT_MAX;
             int index=0;
             for(int i=0;i<nums.size()-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<minsum){
                    minsum=sum;
                    index=i;
                }
             }
             nums[index]=nums[index]+nums[index+1];
             nums.erase(nums.begin()+index+1);
             //Ye vector ke (index+1) position wale element ko delete karta hai
//              //🔹 Delete hone ke baad kya hota hai?
// Saare aage wale elements ek step left shift ho jaate hain
// Vector ka size 1 kam ho jaata ha
             operation++;
        }
        return operation;
    }
};