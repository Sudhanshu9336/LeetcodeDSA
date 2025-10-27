class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int count=INT_MAX;
        for(int i=0;i<strs.size();i++){
      int s=strs[i].size();
      count=min(count,s);
        }
        for(int i=0;i<count;i++){
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(ch!=strs[j][i]){
                    return ans;
                } 
            }
               ans=ans+ch;
        }
        return ans;

    }
};