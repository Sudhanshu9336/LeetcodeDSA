class Solution {
    public boolean judgeCircle(String moves) {
             int n=moves.length();
       // vector<vector<int,int>>arr={0,0};
       int a=0;
       int b=0;
        for(int i=0;i<n;i++){
         char move = moves.charAt(i);

            if(move=='U'){
                a++;
            }
            if(move=='D'){
                a--;
            }
            if(move=='L'){
                b--;
            }
            if(move=='R'){
                b++;
            }
        }
        if(a!=0||b!=0){
            return false;
        }
        return true;
    }
}