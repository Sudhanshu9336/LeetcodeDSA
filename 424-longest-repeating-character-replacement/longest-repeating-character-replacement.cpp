class Solution {
public:
    int characterReplacement(string s, int k) {
       int maxfre=0;
       int l=0;
       int maxl=0;
       int n=s.size();
       map<char,int>fre;
       for(int r=0;r<n;r++){
        fre[s[r]]++;
        maxfre=max(maxfre,fre[s[r]]);
        while((r-l+1)-maxfre>k){
        fre[s[l]]--;
        l++;
        }
        maxl=max(maxl,(r-l+1));
       
       }
       return maxl;
    }
};