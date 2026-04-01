class Solution {
public:
    typedef long long ll;
    bool canPartitionGrid(vector<vector<int>>& grid) {
        // vijay singh bisht
        // 11:10
        int m = grid.size();
        int n = grid[0].size();

        vector<ll> rowSum(m, 0);
        vector<ll> colSum(n, 0);
        ll total = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];

                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }

        
        if (total % 2 != 0) {
            return false;
        }
        // horizontal
        ll upper = 0;
        for (int i = 0; i < m - 1; i++) {
            upper += rowSum[i];
            if (upper == total - upper) {
                return true;
            }
        }

        // vertical
        ll left = 0;
        for (int j = 0; j < n - 1; j++) {
            left += colSum[j];
            if (left == total - left) {
                return true;
            }
        }
        return false;
    }
};