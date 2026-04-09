class Solution {
public:
    // vijay singh bisht
    //7:14 at library
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(); //rows ke liye
        int n = matrix[0].size(); // column ke liye

        for(int i = 0; i< m; i++){
            for(int j = 0; j< n; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }

        return false;

    }
};