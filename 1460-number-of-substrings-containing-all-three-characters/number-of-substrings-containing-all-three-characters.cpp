class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;

        map<char,int>map;
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
// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int count = 0;
//         int n = s.size();
        
//         for(int i = 0; i < n; i++) {
//             vector<int> freq(3, 0);
//             for(int j = i; j < n; j++) {
//                 freq[s[j] - 'a'] = 1; 
//                 if(freq[0] + freq[1] + freq[2] == 3) {
//                     //uske aage ka bhi hum addkar sakte hai
//                     count=count+n-j;
//                     break;
//                 }
//             }
//         }
//         return count;
//     }
// };
