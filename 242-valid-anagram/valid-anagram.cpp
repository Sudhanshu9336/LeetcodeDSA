class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char,int>map;
        for(auto ch:s){
            map[ch]++;
        }
        for(auto ch:t){
            if(map.count(ch)){
                 map[ch]--;
            }
            else{
                return false;
            }
           
        }
     for(auto it : map){
    if(it.second != 0){
        return false;
    }
}
return true;
     
    }
};