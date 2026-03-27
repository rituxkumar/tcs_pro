class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long sum = 0;
        int counterNegatives = 0;
        int absNegatives = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum += abs(matrix[i][j]);

                if (matrix[i][j] < 0) {
                    counterNegatives++;
                }
                absNegatives = min(absNegatives, abs(matrix[i][j]));
            }
        }

        if (counterNegatives % 2 == 0) {
            return sum;
        }

        return sum - 2 * absNegatives;
    }
};