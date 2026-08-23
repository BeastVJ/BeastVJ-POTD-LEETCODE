class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftSum = 0;
        int rightSum = 0;

        int leftCount = 0;
        int rightCount = 0;

        for (int i = 0; i < n; i++) {
            if (num[i] == '?') {
                if (i < n / 2) {
                    leftCount++;
                } else {
                    rightCount++;
                }
            } else {
                if (i < n / 2) {
                    leftSum += num[i] - '0';
                } else {
                    rightSum += num[i] - '0';
                }
            }
        }

        int totalMarks = leftCount + rightCount;
        if (totalMarks % 2 == 1) {
            return true;
        }

        int left = 2 * leftSum + 9 * leftCount;

        int right = 2 * rightSum + 9 * rightCount;

        if (left == right)
            return false;

        return true;
    }
};