class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count  =0 ;
        vector<int> rows(n), cols(m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                if (mat[i][j] == 1) {
                    rows[i]++;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++){
                if (mat[j][i] == 1) {
                    cols[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                if (mat[i][j] == 1) {
                    if (rows[i] == 1 && cols[j] == 1) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};