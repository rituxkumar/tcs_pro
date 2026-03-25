class Solution {
public:
    bool check(int n) {
        int temp = 0;
        while (n > 0) {
            int digit = n % 10;
            temp += digit;
            n = n / 10;
        }
        if (temp % 2 == 0) {
            return true;
        }
        return false;
    }
    int countEven(int num) {
        int counter = 0;
        for (int i = 1; i <= num; i++) {
            if (check(i)) {
                counter++;
            }
        }

        return counter;
    }
};