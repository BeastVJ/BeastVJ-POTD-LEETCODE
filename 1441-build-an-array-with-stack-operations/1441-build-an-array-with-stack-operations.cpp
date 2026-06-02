class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j = 0;

        for (int num = 1; num <= n; num++) {

            if (j == target.size())
                break;

            if (num == target[j]) {
                ans.push_back("Push");
                j++;
            } else {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};