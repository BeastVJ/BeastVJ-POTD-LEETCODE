class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }
        int last;
        if (!mp.empty()) {
            auto maxi = max_element(
                mp.begin(), mp.end(), [](const auto& a, const auto& b) {
                    return a.second < b.second;
                });
            last = maxi->first;
        }
        return last;
    }
};