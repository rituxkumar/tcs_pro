class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long result = 0;
        for (int x : chalk) {
            result += x;
        }
        k = k % result;

        for (int i = 0; i < chalk.size(); i++) {
            if (k < chalk[i])
                return i;

            k -= chalk[i];
        }
        return 0;
    }
};