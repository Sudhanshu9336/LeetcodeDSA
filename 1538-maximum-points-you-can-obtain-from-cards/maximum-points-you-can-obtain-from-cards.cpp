class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int p=k-1;
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+cardPoints[i];
            maxi=max(maxi,sum);
        }
        int i=1;
        while(p>=0){
            sum=sum-cardPoints[p];
            sum=sum+cardPoints[n-i];
            maxi=max(maxi,sum);
            i++;
            p--;
        }
        return maxi;

    }
};