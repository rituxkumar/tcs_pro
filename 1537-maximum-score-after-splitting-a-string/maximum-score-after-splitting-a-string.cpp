class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int result = INT_MIN;

        for (int i = 0; i <= n - 2; i++) {
            int zerCount = 0;
            for (int j = 0; j <= i; j++) {
                if (s[j] == '0') {
                    zerCount++;
                }
            }
            int oneCount = 0;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == '1') {
                    oneCount++;
                }
            }
            result = max(result, zerCount + oneCount);
        }
        return result;
    }
};