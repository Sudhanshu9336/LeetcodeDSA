class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        for(auto c:s){
            map[c]++;
        }
        vector<pair<char,int>>fre(map.begin(),map.end());
        sort(fre.begin(),fre.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string result="";
        for(auto &p : fre) {
            result.append(p.second, p.first); 
        }
        return result;
        
    }
};

// class Solution {
// public:
//     string frequencySort(string s) {
//         string st="";
//         map<char,int>map;
//         for(auto val:s){
//             map[val]++;
//         }
//         for(auto it:map){
//             char ch=it.first;
//             for(int i=0;i<it.second;i++){
//           st=st+ch;
//             }
//         }
//         return st;
//     }
// };