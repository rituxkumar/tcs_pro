class Solution {
public:
    int mirrorDistance(int n) {
        if (n <= 9) {
            return 0;
        }

        int rev = 0;
        int original = n;
        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        return abs(original - rev);
    }
};