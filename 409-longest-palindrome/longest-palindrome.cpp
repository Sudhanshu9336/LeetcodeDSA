class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        unordered_map<char,int>map;
        for(auto i:s){
            map[i]++;
        }
        int ssize=0;
        bool existodd=false;

        for(auto it:map){
            if(it.second%2==0){
                count=count+it.second;
            }
            if(it.second%2!=0){
               count=count+it.second-1;
                existodd=true;
            }
        }
      if(existodd){
        count=count+1;
      }
        return count;
    }
};