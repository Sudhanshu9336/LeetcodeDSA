class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=INT_MIN;
        int left=0;
        int right=n-1;
        while(left<right){
                int mini=min(height[left],height[right]);
                int l=right-left;
                maxi=max(maxi,mini*l);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};