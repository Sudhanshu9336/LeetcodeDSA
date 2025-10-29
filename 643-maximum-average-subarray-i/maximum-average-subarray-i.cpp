class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
int i=0;
int j=k-1;
double sum=0;
int n=nums.size();
// double maxi=INT_MIN;
for(int i=0;i<k;i++){
    sum=sum+nums[i];
}
double maxi=sum/k;
int p=1;
while(p<=n-k){
    sum=sum-nums[p-1]+nums[p+k-1];
    double com=(double)sum/k;
    maxi=max(maxi,com);
    p++;
  
}
return maxi;
    }
};