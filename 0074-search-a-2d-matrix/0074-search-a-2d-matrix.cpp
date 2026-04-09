class Solution {
public:
    // vijay singh bisht
    //7:14 at library
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix[0].size(); 
        int i = 0;
        for(int j = n-1; j > 0; j--){
            if(matrix[i][j]> target){
                j--;
            }else if(matrix[i][j] < target){
                i++;
            }else{
                return true;
            }
        }
        return false;

    }
};