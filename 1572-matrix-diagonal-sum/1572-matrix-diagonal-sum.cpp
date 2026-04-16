class Solution {
public:
    // vijay singh bisht
    // 3:20 at library;
    int diagonalSum(vector<vector<int>>& mat) {
        int row = 0;
        
        auto lambda = [&](int sum, vector<int> vec) {
            sum = sum + vec[row];
            if(row != vec.size() - row - 1){
                sum += vec[vec.size() - row - 1];
            }
            row++;
            return sum;
        };
        
	    int result =  accumulate(mat.begin(), mat.end(), 0, lambda);
        
        return result;

    }
};