class Solution {
public:
    int nextGreaterElement(int n) {
        string p=to_string(n);
       if(next_permutation(p.begin(),p.end())){
              long long num=stoll(p);
                    return num<=INT_MAX?num:-1;
       }
    else{
        return -1;
    }

    }
};