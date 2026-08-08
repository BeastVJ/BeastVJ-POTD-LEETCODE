class Solution {
public:
    // vijay singh bisht
    // at  midway
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int mSum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            currSum = max(nums[i], currSum + nums[i] );
            mSum = max(currSum, mSum);
        }
        
        return mSum;
    }
};