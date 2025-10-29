class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n==0)return true;
        int i=0;
        int j=0;
        while(j<m){
            if(t[j]==s[i]){
                i++;
            }
         if(i>=n)return true;
            j++;
        }
        return false;
    }
};