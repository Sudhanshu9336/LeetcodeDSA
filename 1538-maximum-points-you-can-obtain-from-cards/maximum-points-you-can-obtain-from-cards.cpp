class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
        }
        int maxsum=lsum;
        int l=k-1;
        int rsum=0;
        int r=1;
        while(l>=0){
            lsum=lsum-cardPoints[l];
            rsum=rsum+cardPoints[n-r];
            maxsum=max(lsum+rsum,maxsum);
                        r++;
                        l--;
        }
        return maxsum;
    }
};