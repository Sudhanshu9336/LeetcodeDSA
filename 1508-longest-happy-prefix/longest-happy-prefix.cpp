class Solution {
public:
void lps(vector<int>&ans,string s){
    int m=s.size();
int pre=0;
int suf=1;
while(suf<m){
    if(s[pre]==s[suf]){
        ans[suf]=pre+1;
        pre++;
        suf++;
    }
    else{
        if(pre==0){
            ans[suf]=0;
            suf++;
        }
        else{
            pre=ans[pre-1];//"Agar pura match fail ho gaya, toh uske andar ka best partial match try karo" 
        }
    }
}

}
    string longestPrefix(string s) {
        int n=s.size();
        vector<int>ans(n,0);
        lps(ans,s);
        int len = ans[n-1];
         return s.substr(0, len);
    }
};