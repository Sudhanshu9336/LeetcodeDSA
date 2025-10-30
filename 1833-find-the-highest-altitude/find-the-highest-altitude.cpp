class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int n=gain.size();
        int current=0;
        for(int i=0;i<n;i++){
            current=current+gain[i];
            maxi=max(current,maxi);

        }
        return maxi;
    }
};