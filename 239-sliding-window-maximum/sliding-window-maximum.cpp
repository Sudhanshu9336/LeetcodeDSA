class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        deque<int>d;
        for(int i=0;i<n;i++){
            if(!d.empty()&&d.front()<=i-k){
               d.pop_front();
            }
            while(!d.empty()&&nums[d.back()]<=nums[i]){
                d.pop_back();
            }
            d.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[d.front()]);
            }
        }
        return ans;
    }
};
//Final Algorithm Summary

// Deque ko decreasing order mein maintain karo

// Front hamesha max ka index rakhega

// Har index ek baar add aur ek baar remove hota hai