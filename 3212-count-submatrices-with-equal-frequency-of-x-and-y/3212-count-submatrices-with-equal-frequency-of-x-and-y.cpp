class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> cumsumX(m, vector<int>(n,0));
        vector<vector<int>> cumsumY(m, vector<int>(n,0));
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                cumsumX[i][j] = (grid[i][j] == 'X');
                if (i - 1 >= 0)
                    cumsumX[i][j] += grid[i - 1][j];

                if (j - 1 >= 0) {
                    cumsumX[i][j] += grid[i][j - 1];
                }

                if (i - 1 >= 0 && j - 1 >= 0) {
                    cumsumX[i][j] += grid[i - 1][j - 1];
                    count++;
                }

                cumsumY[i][j] = (grid[i][j] == 'Y');
                if (i - 1 >= 0)
                    cumsumY[i][j] += grid[i - 1][j];
                if (j - 1 >= 0)
                    cumsumY[i][j] += grid[i][j - 1];
                if (i - 1 >= 0 && j - 1 >= 0)
                    cumsumY[i][j] += grid[i - 1][j - 1];
                count++;
            }
        }

        return count - 5;
    }
};