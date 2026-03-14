class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        stack<int>st;
        vector<int>ans;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&nums2[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                map[nums2[i]]=-1;
            }
            else{
            map[nums2[i]]=st.top();
            }
              st.push(nums2[i]);
        }
        for(auto val:nums1){
            ans.push_back(map[val]);
        }
        return ans;
    }
};