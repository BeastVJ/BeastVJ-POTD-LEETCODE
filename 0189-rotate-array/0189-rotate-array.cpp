class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // vector<int> nums;
        // for(auto it: numss){
        //     nums.push_back(it);
        // }

        k %= nums.size();

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin()+ k, nums.end());

        // return nums;
    }
};