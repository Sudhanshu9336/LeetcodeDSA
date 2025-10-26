class Solution {
public:
    int search(vector<int>& nums, int target) {
     int  n=nums.size();
    int l=0;
    int r=n-1;
    while(l<=r) 
    {
        int mid=l+r;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>nums[l]&&nums[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    } 
    return -1; 
    }
};