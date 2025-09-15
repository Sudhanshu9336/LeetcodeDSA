class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        deque<int>q;
        int l=0,r=0,sum=0,count=0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        goal--;
        int cnt=0;
        l=0;
        r=0;
        sum=0;
        if(goal>=0){
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }}
        return count-cnt;
    }
};