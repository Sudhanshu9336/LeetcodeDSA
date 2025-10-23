class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.size();
        if(n<2)return false;
        while(s.size()>2){
            string p=s;
            string result="";
            for(int i=0;i<p.size()-1;i++){
                int m=(s[i]-'0'+s[i+1]-'0')%10;
                result=result+to_string(m);
            }
            s=result;
        }
        if(s[0]!=s[1])return false;
        return true;
        
    }
};