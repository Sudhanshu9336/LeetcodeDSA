class Solution {
public:


// "Agar dono frequency arrays same hain → substring permutation hai"
// dekh sudhanshu mai kya karunga ki dono ka size nikala f1 mai maine pahle string ka freq har element ka dala 
// for baad mai 0 se n size tak maine window banaya s2 ka freq dala compare kiya nahi hai then maine sliding window ko aage kiya i=n se badyaha jab tak i<m na ho jaye 
// maine i=n wale ke fre ko ++ kiya aur [i-n] wale ka freq maine minus kiya compare karta raha  agar same mil jate hai toh mai return kar dunga true warna false he rahega na ashan hai yarr mere liye bahuut yeh question mai bhoolunga nahi iseee


    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)return false;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(auto ch:s1){
            f1[ch-'a']++;
        }
         for(int i = 0; i < n; i++){
            f2[s2[i] - 'a']++;
        }
        if(f1==f2)return true;
        for(int i=n;i<m;i++){
            f2[s2[i]-'a']++;
            f2[s2[i-n]-'a']--;
            if(f1==f2)return true;
        }
        return false;

    }
};