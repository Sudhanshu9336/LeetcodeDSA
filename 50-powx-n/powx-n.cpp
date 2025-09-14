class Solution {
public:
    double myPow(double x, int n) {
        long long m = n;           // ✅ double -> long long
        long long exp = abs(m);    // ✅ safe abs for INT_MIN
        double ans = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                ans = ans * x;
                exp = exp - 1;
            } else {
                exp = exp / 2;
                x = x * x;
            }
        }
        if (m < 0) return 1 / ans;
        return ans;
    }
};
