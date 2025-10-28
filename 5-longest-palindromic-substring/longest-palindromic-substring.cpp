class Solution {
public:
    string longestPalindrome(string s) {
            string ans="";
        int maxl=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int j=i-1;
            int k=i+1;
            while(j>=0&&k<n&&s[j]==s[k]){
                int count=k-j+1;
                if(count>maxl){
                    maxl=count;
                    ans=s.substr(j,count);
                }
                j--;
                k++;
            }
            j=i;
            k=i+1;
            while(j>=0&&k<n&&s[j]==s[k]){
                int count=k-j+1;
                if(count>maxl){
                    maxl=count;
                    ans=s.substr(j,count);
                }
                j--;
                k++;
            }
        }
          if(ans.empty()&&!s.empty()){
                ans=s.substr(0,1);
            }
        return  ans;
    }
};