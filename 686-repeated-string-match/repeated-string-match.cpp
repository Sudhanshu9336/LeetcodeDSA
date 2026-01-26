class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string p=a;
        int count=1;
        int n=a.size();
        int m=b.size();
    //    while(count<1000){
    //    int i=0;
    //    while(i<a.size()){
    //     if(a.substr(i,m)==b){
    //         return count;
    //     }
    //     i++;
    //    }
    //    a=a+p;
    //    count++;
    //     }
    //     return -1;
    while(a.size()<b.size()){
        a=a+p;
        count++;
    }
    int i=0;
    while(i<a.size()){
        if(a.substr(i,m)==b){
            return count;
        }
        i++;
    }
    a=a+p;
    count++;
    int k=0;
    while(k<a.size()){
        if(a.substr(k,m)==b){
            return count;
        }
        k++;
    }

    return -1;


    }
};