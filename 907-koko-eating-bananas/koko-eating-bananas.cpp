class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
       
        while(left<right){
            int mid=left+(right-left)/2;
            long long  hour=0;
            for(auto pile:piles){
                 hour =hour+ceil((double)pile/mid);
            }
            if(hour<=h){
                right=mid;
            }
            else {
                left=mid+1;
            }
        }
        return left;
        
    }
};