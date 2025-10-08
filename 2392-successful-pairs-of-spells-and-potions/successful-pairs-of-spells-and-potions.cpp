class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        vector<int>result(n);
         sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long spell=spells[i];
            int l=0;
            int r=m-1;
            int index=m;
            while(l<=r){
             int mid = l + (r - l) / 2;
                long long p=1LL*spell*potions[mid];
                if(p>=success){
                    index=mid;
                    r=mid-1;
                } 
                else {
              l=mid+1;
                }
            }
        result[i]=m-index;
        }
          
        return result;
    }
};