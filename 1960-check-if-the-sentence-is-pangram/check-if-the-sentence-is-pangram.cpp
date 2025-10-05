class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        if(n<26)return false;
        map<char,int>map;
        for(auto it:sentence){
            map[it]++;
        }
        if(map.size()!=26)return false;
        return true;
        
    }
};