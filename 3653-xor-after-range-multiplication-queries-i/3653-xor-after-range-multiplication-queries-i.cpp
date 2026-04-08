class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int M = 1e9 + 7;
        for (auto it : queries) {
            int l = it[0];
            int r = it[1];
            int k = it[2];
            int v = it[3];
            while (l <= r) {
                nums[l] = (1ll * nums[l] * v) % M;
                l += k;
            }
        }
        int result = 0;
        for (int &kt : nums) {
            result ^= kt ;
        }
        return result;
    }
};