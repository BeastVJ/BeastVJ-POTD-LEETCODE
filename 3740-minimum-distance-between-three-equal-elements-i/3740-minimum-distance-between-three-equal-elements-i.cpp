class Solution {
public:
    // Vijay Singh Bisht
    // 11:50 at 204
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto it : mp) {
            vector<int> &v = it.second;

            if(v.size() >= 3){
                for(int i = 0; i+2 < v.size(); i++){
                    int curr = 2* (v[i+2] - v[i]);
                    ans = min(ans, curr);
                }
            }
        }

        // if(min >200) return -1;
        return (ans == INT_MAX )? -1 : ans;
    }
};