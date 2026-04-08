class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (auto it : indices) {
            int r = it[0];
            int c = it[1];

            for (int i = 0; i < n; i++) {
                matrix[r][i]++;
            }
            for (int j = 0; j < m; j++) {
                matrix[j][c]++;
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] % 2 != 0) {
                    count++;
                }
            }
        }

        return count;
    }
};