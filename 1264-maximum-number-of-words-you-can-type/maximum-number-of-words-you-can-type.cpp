class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string word;
        int count=0;
        set<int>set(brokenLetters.begin(),brokenLetters.end());
        stringstream ss(text);
        while(ss>>word){
            int n=word.size();
            bool find=false;
            for(auto i=0;i<n;i++){
                if(set.find(word[i])!=set.end())
                {find=true;
                break;}
            }
            if(find==false){
            count++;
            }
        }
        return count;
        
    }
};