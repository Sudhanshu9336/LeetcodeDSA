class Solution {
public:
    int compress(vector<char>& chars) {
       int n=chars.size();
        int idx = 0;
        int i=0;
        while(i<n){
             int j=i;
             char ch=chars[i];
             while(j<n&&ch==chars[j]){
                j++;
             }
             int count=j-i;
           chars[idx++]=ch;
           if(count>1){
             string cnt = to_string(count);
              for (char c : cnt) {
                    chars[idx++] = c;
                }
             
           }
             i=j;
        }
        return idx;
    }
};