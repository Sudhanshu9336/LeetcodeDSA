class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        int g=groupSize;
        if(n<g||n%g!=0)return false;
        map<int,int>map;
        for(auto val:hand){
            map[val]++;
        }
        while(!map.empty()){
            int s=map.begin()->first;
            for(int i=0;i<g;i++){
                int card=s+i;
                if(map[card]==0)return false;
                map[card]--;
                  if(map[card]==0)
                  map.erase(card);

            }
           
        }
        return true;
    }
};