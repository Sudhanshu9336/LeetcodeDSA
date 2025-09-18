class Solution {
public:
    int trap(vector<int>& height) {
         int n=height.size();
        int ans=0;
         vector<int>left(n);
         vector<int>right(n);
        
         int maxi=INT_MIN;
         for(int i=0;i<n;i++){
            if(maxi<=height[i]){
                maxi=height[i];
                left[i]=maxi;
            }
            else{
                left[i]=maxi;
            }
         }
         int mini=INT_MIN;
           for(int i=n-1;i>=0;i--){
            if(mini<=height[i]){
                mini=height[i];
                right[i]=mini;
            }
            else{
                right[i]=mini;
            }
         }
         for(int i=0;i<n;i++){
            int p=min(left[i],right[i]);
            ans=ans+p-height[i];
         }
         return ans;

    }
};