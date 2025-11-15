class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        int i=0;
        while(n>0){
            int re=n%10;
            int p=re*pow(10,i);
            i++;
            if(p!=0){
                ans.push_back(p);
            }
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};