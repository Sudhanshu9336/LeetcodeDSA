class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        // for(auto val:s){
        //     sum=sum+val;
        // }
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