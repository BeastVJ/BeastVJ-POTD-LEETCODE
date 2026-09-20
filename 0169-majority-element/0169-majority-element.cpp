class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;

        for (auto x : nums) {
            mp[x]++;
        }

        auto maxi = max_element(mp.begin(), mp.end(),
            [](const auto& a, const auto& b) {
                return a.second < b.second;
            });

        return maxi->first;
    }
};