class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        set<pair<int,int>> st; 
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(abs(nums[i] - nums[j]) == k){
                    int a = min(nums[i], nums[j]);
                    int b = max(nums[i], nums[j]);
                    if(st.find({a, b}) == st.end()){
                        count++;
                        st.insert({a, b});  
                    }
                }
            }
        }
        return count;
    }
};
