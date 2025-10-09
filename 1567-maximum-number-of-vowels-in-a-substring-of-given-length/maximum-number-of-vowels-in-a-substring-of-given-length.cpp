class Solution {
public:
    int maxVowels(string s, int k) {
       set<char>set = {'a','e','i','o','u'};
        int n=s.size();
        int count=0;
        int maxcount=0;
        int r=0;
        int l=0;
        while(r<k){
            if(set.count(s[r])){
                count++;
                maxcount=max(maxcount,count);
            }
            r++;
        }
        while(r<n){
             if(set.count(s[l])){
                count--;
             }
            if(set.count(s[r])){
                count++;
               maxcount=max(maxcount,count);
            }
            
             r++;
             l++;
        }
       return maxcount;
    }
};