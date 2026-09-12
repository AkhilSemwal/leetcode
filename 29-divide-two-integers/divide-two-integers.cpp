class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long dvd = labs(dividend);
        long dvs = labs(divisor);
        long ans = 0;

        for (int i = 31; i >= 0; --i) {
            if ((dvd >> i) >= dvs) {
                ans += (1LL << i);
                dvd -= (dvs << i);
            }
        }

        if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0)) {
            return ans;
        } else {
            return -ans;
        }
    }
};