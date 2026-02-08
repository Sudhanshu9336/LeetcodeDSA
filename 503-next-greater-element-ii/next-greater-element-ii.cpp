class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> arr(2*n);
        for(int i = 0; i < n; i++){
            arr[i] = nums[i];
            arr[i + n] = nums[i];
        }
        
        vector<int> newarr(2*n, -1);
        stack<int> st;
        
        for(int i = 2*n - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                newarr[i] = st.top();
            }
            st.push(arr[i]);
        }
        

        vector<int> result(n);
        for(int i = 0; i < n; i++){
            result[i] = newarr[i];
        }
        
        return result;
    }
};
