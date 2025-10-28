class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        int cary=0;
        vector<int>ans;
        while(k>0||i>=0||cary!=0){
            int sum=cary;
            if(i>=0)sum=sum+num[i--];
            if(k>0){
                sum=sum+k%10;
                k=k/10;
            }
             ans.push_back(sum%10);
             cary=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};