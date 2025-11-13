class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        stack<int>st;
        int n=nums.size()-1;
        for(int i=n;i>=0;i--){
            if(st.empty()){
                st.push(i);
            }
            if(nums[i]>nums[st.top()]){
                st.pop();
                st.push(i);
            }
        }
        return st.top();
    }
};