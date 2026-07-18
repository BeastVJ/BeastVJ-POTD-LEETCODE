class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        cout<<nums[0]<<" "<<nums[n-1];
        int num = gcd(nums[0], nums[n-1]);
        return num;
    }
};