class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;          // read pointer
        int index = 0;      // write pointer
        int n = chars.size();

        while(i < n){
            char ch = chars[i];
            int count = 0;
            while(i < n && chars[i] == ch){
                i++;
                count++;
            }
            chars[index++] = ch;

            // write count if > 1
            if(count > 1){
                string cnt = to_string(count);
                for(char c : cnt){
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};