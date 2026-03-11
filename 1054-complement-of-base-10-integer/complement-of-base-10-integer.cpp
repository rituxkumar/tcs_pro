class Solution {
public:
    int bitwiseComplement(int n) {
        int result = 0;
        int ince = 0;
        if (n == 0)
            return 1;
        while (n != 0) {

            int r = n % 2;
            result += pow(2, ince) * (!r);
            n = n / 2;
            ince++;
        }
        return result;
    }
};