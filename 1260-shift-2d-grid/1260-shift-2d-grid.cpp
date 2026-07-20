class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> oned;

        int m = grid.size();
        int n = grid[0].size();
        for (const auto& row : grid) {
            for (auto element : row) {
                oned.push_back(element);
            }
        }
        k %= oned.size();

        reverse(oned.begin(), oned.end());

        reverse(oned.begin(), oned.begin() + k);

        reverse(oned.begin() + k, oned.end());

        vector<vector<int>> ans(m, vector<int>(n));

        int idx = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = oned[idx++];
            }
        }

        return ans;
    }
};