class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                result[i] = 0;
            } else {
                int steps = nums[i];
                int newJagah = (i + steps) % n;
                if(newJagah < 0) newJagah += n; 
                result[i] = nums[newJagah];
            }
        }
        return result;
    }
};