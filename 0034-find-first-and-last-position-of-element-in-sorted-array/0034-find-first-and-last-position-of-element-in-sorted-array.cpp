class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = 0;
        int second = 0;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                result.push_back(i);
            }
        }
        // if(result.size()== 1) return {result};
        vector<int> ans;
        if (result.size() == 1) {
            for (int it : result) {
                ans.push_back(it);
                ans.push_back(it);
                return ans;
            }
        }
        if (result.size() == 0)
            return {-1, -1};

        return {result.front(), result.back()};
    }
};