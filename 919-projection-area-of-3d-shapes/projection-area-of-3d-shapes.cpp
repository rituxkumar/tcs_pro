class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = 0;
        // top view
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0)
                    area++;
            }
        }

        // front+side
        for (int i = 0; i < n; i++) {
            int maxRow = 0;
            int minCol = 0;
            for (int j = 0; j < n; j++) {
                maxRow = max(maxRow, grid[i][j]);
                minCol = max(minCol, grid[j][i]);
            }
            area += maxRow + minCol;
        }

        return area;
    }
};