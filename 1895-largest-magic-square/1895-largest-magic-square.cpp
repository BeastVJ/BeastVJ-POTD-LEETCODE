class Solution {
public:
    // VIJAY SINGH BISHT
    // 12:40
    bool isPerfectSquare(vector<vector<int>>& mat, int r, int c, int k) {
    int targetSum = 0;

    for (int j = 0; j < k; j++) {
        targetSum += mat[r][c + j];
    }

    // check rows
    for (int i = 0; i < k; i++) {
        int rowSum = 0;
        for (int j = 0; j < k; j++) {
            rowSum += mat[r + i][c + j];
        }
        if (rowSum != targetSum) return false;
    }

    // check columns
    for (int j = 0; j < k; j++) {
        int colSum = 0;
        for (int i = 0; i < k; i++) {
            colSum += mat[r + i][c + j];
        }
        if (colSum != targetSum) return false;
    }

    // main diagonal
    int mainDiag = 0;
    for (int i = 0; i < k; i++) {
        mainDiag += mat[r + i][c + i];
    }
    if (mainDiag != targetSum) return false;

    // secondary diagonal
    int secDiag = 0;
    for (int i = 0; i < k; i++) {
        secDiag += mat[r + i][c + k - 1 - i];
    }
    if (secDiag != targetSum) return false;

    return true;
}

    int largestPerfectSquareSize(vector<vector<int>>& matrix) {
    int R = matrix.size();
    int C = matrix[0].size();

    int maxSize = 0;

    for (int k = 2; k <= min(R, C); k++) {
        for (int i = 0; i <= R - k; i++) {
            for (int j = 0; j <= C - k; j++) {
                if (isPerfectSquare(matrix, i, j, k)) {
                    maxSize = max(maxSize, k);
                }
            }
        }
    }

    return maxSize;
}
    int largestMagicSquare(vector<vector<int>>& grid) {
        int ans = largestPerfectSquareSize(grid);
        if(ans == 0){
            return 1;
        }
        return ans;
    }
};