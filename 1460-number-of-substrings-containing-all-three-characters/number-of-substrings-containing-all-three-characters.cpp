class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int n=s.size();
        unordered_map<char,int>map;
        for(int i=0;i<n;i++){
            map[s[i]]=i+1;
            if(map.size()==3){
                int mini=INT_MAX;
                for(auto it:map){
                    mini=min(it.second,mini);
                }
                    count=count+mini;
                
            }
           
        }
         return count;
    }
};