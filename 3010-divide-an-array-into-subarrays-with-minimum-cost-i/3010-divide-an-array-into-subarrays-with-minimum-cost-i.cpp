class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first = nums[0];
        int startIndex = 1;
        sort(nums.begin()+startIndex , nums.end());
        int sum = first + nums[1]+nums[2];
        return sum;
    }
};