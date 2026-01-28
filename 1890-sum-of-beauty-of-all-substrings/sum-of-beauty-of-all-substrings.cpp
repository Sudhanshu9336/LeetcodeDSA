class Solution {
public:
    int beautySum(string s) {
           int n=s.size();
              int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>map;
            for(int j=i;j<n;j++){
                map[s[j]]++;
                  int maxi=0;
                int mini=INT_MAX;
                if(map.size()>=2){
                for(auto it:map){
                maxi=max(maxi,it.second);
                mini=min(mini,it.second);
             } 
            
               sum=sum+(maxi-mini);
                }
            }

        }
        return sum;
    
    }
};