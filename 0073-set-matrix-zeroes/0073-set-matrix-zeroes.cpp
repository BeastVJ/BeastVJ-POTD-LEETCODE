class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool zeroFirstCol = false;
        for(int i = 0; i<m ; i++){
            if(matrix[i][0] == 0) zeroFirstCol = true;
            for(int j = 1; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0]= 0;
                    matrix[0][j]= 0;
                }
            }
        }

        for(int row = m -1; row >= 0; row--){
            for(int col = n-1; col >= 1; col--){
                if(matrix[row][0] == 0 || matrix[0][col] == 0){
                    matrix[row][col] = 0;
                }
            }
            if(zeroFirstCol){
                matrix[row][0] = 0;
            }
        }
    }
};