class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            for (int pile : piles) {
                hours =hours+ceil((double)pile/mid);
            }
            if (hours <= h) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }
        
        return left;
    }
};
