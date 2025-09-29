class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxc=0;
        for(int i=0;i<n;i++){
            set<int>set;
          for(int j=i;j<n;j++){

            if(set.find(s[j])!=set.end()){
                break;
            }
                          set.insert(s[j]);
           
            maxc=max(maxc,j-i+1);
          }
           
        }
        return maxc;
    }
};