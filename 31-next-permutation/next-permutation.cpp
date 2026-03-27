class Solution {
public:
 void nextPermutation(vector<int>& nums) {
    //     pahle pivot find karo suppose hai array[1,2,3,6,5,4]
    //     peeche se mai aaunga aaur dekhnga ki pahla sabse chota element kon hai apne right se voh hai 3 index pta chal gya
    //     ab fir se peeche se dekhengey ki pahla element kon sa bda hai nums[i] wale se aagya toh swap pivot aur usko kar denegy.
    //     then aage se pivot ke aage wale se reverse kar dengey hamara array create ho jayega.
          
          int n=nums.size();
          int i=n-2;
          while(i>=0&&nums[i]>=nums[i+1]){
            i--;
          }
          if(i>=0){
          int j=n-1;
          while(nums[j]<=nums[i]){
            j--;
          }
          swap(nums[i],nums[j]);
          }
          reverse(nums.begin()+i+1,nums.end());
          

    }
};