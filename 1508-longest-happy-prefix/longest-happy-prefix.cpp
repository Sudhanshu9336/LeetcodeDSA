class Solution {
public:
int LPS(string& s){
    int n=s.size();
    vector<int>len(n,0);
    int pre=0;
    int suf=1;
    while(suf<n){
        if(s[pre]==s[suf]){
            pre++;
            len[suf]=pre;
            suf++;
        }
        else {
            if(pre!=0){
                pre=len[pre-1];
            }
            else {
                len[suf]=pre;
                suf++;
            }
        }

    }
    return len[n-1];
}
    string longestPrefix(string s) {
        int le=LPS(s);
        return s.substr(0,le);
    }
};
//brute mera kaam ka nahi 

//class Solution {
// public:
// //memory limit hai bas code to sahi hai mera 
//     string longestPrefix(string s) {
//         string ans="";
//         int n=s.size();
//         set<string>set;
//     int i=0;
//     for(int j=0;j<n;j++){
//         string pre=s.substr(i,j);
//         set.insert(pre);
//     }
//     int k=n-1;
//     while(k>0){
//        string suf = s.substr(k, n-k);
//         if(set.find(suf)!=set.end()){
//             ans=suf;
//         }
//         k--;
//     }
//     return ans;
//     }
// };