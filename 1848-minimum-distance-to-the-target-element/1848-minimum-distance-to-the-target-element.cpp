class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minm = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int curr;
            if (nums[i] == target) {
                curr = abs(i - start);
                if (minm > curr) {
                    minm = curr;
                }
            }
        }
        return minm;
    }
};