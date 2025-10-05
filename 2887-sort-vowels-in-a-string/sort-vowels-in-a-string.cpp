class Solution {
public:
bool isvowel(char ch){
    switch(ch){
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
     case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    return true;
    default :
    return false;
}
}
    string sortVowels(string s) {
        vector<char>vowel;
        for(auto ch:s){
            if(isvowel(ch)){
                vowel.push_back(ch);
            }
        }
     sort(vowel.begin(),vowel.end());
        int index=0;
        for(auto &ch:s){
            if(isvowel(ch)){
                ch=vowel[index];
                index++;
            }
        }
        return s;


    }
};