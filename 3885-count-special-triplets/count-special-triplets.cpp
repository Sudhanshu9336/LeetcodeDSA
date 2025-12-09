class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int ans=0;const long long MOD = 1000000007;

      unordered_map<int,long>left;
        unordered_map<int,long>right;
        int n=nums.size();
        for(auto val:nums){
            right[val]++;
        }
           for(int val: nums){
            right[val]--;  

            int want = val * 2; 
            long long prod = left[want] * right[want];
            //agr left mai nahi hai element toh zero he hoga na
            ans = (ans + prod) % MOD;
            

            left[val]++;   // update left
        }
        return ans;
    }
};