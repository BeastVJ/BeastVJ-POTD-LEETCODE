class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        // int sum = 0;
        int currsum = 0;
        for(int sum: nums){
            currsum =  currsum + sum;
            ans.push_back(currsum);
        }
        return ans;
    }
};