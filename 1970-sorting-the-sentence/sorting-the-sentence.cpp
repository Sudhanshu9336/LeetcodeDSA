class Solution {
public:
    string sortSentence(string s) {
        string word;
        string result="";
        stringstream ss(s);
       
        int count=1;
        while(ss >> word){
            count++;
        }
         vector<string>arr(count);
          ss.clear();  
        ss.str(s);  
        while(ss>>word){
            int n=word.size();
            int m=word[n-1]-'0';
        string p=word.substr(0,n-1);
            arr[m-1]=p;
        }
       bool boo=true;
for(auto it:arr){
    if(it != "") {          // only process non-empty words
        if(!boo) result += " ";  
        result += it;
        boo = false;
    }
}

        return result;

    }
};