class Solution {
public:
    int totalMoney(int n) {
        int money = 0;
        int monday = 1;

        while (n > 0) {
            int day = monday;
            for (int i = 0; i < 7 && n > 0; i++) {
                money += day;
                day++;
                n--;
            }
            monday++;
        }

        return money;
    }
};
