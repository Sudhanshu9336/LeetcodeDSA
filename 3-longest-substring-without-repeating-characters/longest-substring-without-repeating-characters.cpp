class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
        set<int>set;
            for(int j=i;j<s.size();j++){
                if(set.find(s[j])!=set.end()){
                    break;
                }
                set.insert(s[j]);
                int l=j-i+1;
                count=max(count,l);
            }
        }
        return count;
    }
};