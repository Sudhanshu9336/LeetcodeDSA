class Solution {

//     Agar chhote bacche ko bada cookie de diya → waste ho jayega
// Bada greed wala baad me satisfy nahi hoga
// Smallest greed + smallest possible cookie
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
      
        sort(s.begin(),s.end());
         int l=0;
         int n=s.size();
         int i=0;
         int m=g.size();
         while(l<n&&i<m){
          if(s[l]>=g[i]){
            count++;
            l++;
            i++;
          }
          else {
            l++;
          }
         }    
        return count;
    }
};