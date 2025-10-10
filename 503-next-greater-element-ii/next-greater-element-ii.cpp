class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n*2);
        ans=nums;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
        }
       vector<int>result(n*2);
        for(int i=ans.size()-1;i>=0;i--){
            while(!st.empty()&&ans[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
             result[i]=-1;
             st.push(ans[i]);
            }
            else{
                result[i]=st.top();
                st.push(ans[i]);
            }
        }
        vector<int>results(n);
        for(int i=0;i<n;i++){
            results[i]=result[i];
        }
        return results;
    }
};