class Solution {
public:

    bool judgeCircle(string moves) {
        int n=moves.size();
       // vector<vector<int,int>>arr={0,0};
       int a=0;
       int b=0;


        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                a++;
            }
            if(moves[i]=='D'){
                a--;
            }
            if(moves[i]=='L'){
                b--;
            }
            if(moves[i]=='R'){
                b++;
            }
        }
        if(a!=0||b!=0){
            return false;
        }
        return true;
    }
};