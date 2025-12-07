class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int left=0;
        int right=0;
        int fala=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                left++;
            }
            if(moves[i]=='R'){
                right++;
            }
            if(moves[i]=='_'){
                fala++;
            }
        }
        int p=abs(right-left);
        return p+fala;
    }
};