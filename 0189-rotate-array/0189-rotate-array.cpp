class Solution {
public:
    // vijay singh bisht
    //at midway bhimtal
    void rotate(vector<int>& nums, int k) {

        k %= nums.size();

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin()+ k, nums.end());

        // return nums;
    }
};