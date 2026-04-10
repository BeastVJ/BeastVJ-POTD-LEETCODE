class Solution {
public:
    // Vijay Singh Bisht
    // 11:50 at 204
    int minimumDistance(vector<int>& nums) {
        int min = INT_MAX;
        map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto it : mp) {
            if (it.second.size() > 2) {
                int currMin = abs(it.second[0] - it.second[1]) +
                              abs(it.second[1] - it.second[2]) +
                              abs(it.second[2] - it.second[0]);
                if (min > currMin) {
                    min = currMin;
                }
            }
        }
        if(min >200) return -1;
        return min;
    }
};