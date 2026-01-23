class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> map;
        map[5] = 0;
        map[10] = 0;
        map[20] = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                map[5]++;
            }
            else if (bills[i] == 10) {
                map[10]++;
                if (map[5] == 0) {
                    return false;
                }
                map[5]--;
            }
            else { // bills[i] == 20
                if (map[10] >= 1 && map[5] >= 1) {
                    map[10]--;
                    map[5]--;
                }
                else {
                
                
                    if (map[5] >= 3) {
                        map[5] = map[5] - 3;
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
