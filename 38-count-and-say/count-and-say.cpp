class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string pre=countAndSay(n-1);
        string ans="";
        int count=1;
        for(int i=1;i<=pre.size();i++){
            if(i<pre.size()&&pre[i]==pre[i-1]){
                count++;
            }
            else{
                ans=ans+to_string(count);
                ans=ans+pre[i-1];
                count=1;
            }
        }
        return ans;

        
    }
};