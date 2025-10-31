class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        if(n!=m)return false;
        unordered_set<char>set1,set2;
        vector<int>fre1(26,0),fre2(26,0);
        for(auto c:word1){
            set1.insert(c);
            fre1[c-'a']++;
        }
         for(auto c:word2){
            set2.insert(c);
            fre2[c-'a']++;
        }
        if(set1!=set2)return false;
        sort(fre1.begin(),fre1.end());
           sort(fre2.begin(),fre2.end());
           return fre1==fre2;

    }
};