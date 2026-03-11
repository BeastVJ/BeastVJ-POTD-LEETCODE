class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int count  =0 ;
        for(int i = 0; i< n ; i++){
            for(int j = 0; j< m; j++){
                if(mat[i][j] == 1 ) {
                    int x=0,y=0;
                    for (int k = 0; k < m; k++) {
                        if (mat[i][k] == 1) {
                            x++;
                        }
                    }
                    for (int k = 0; k < n; k++) {
                        if (mat[k][j] == 1) {
                            y++;
                        }
                    }
                    if (x == 1 && y == 1) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};