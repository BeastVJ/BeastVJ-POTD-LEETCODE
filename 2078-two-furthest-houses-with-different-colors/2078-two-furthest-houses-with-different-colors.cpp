class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max = INT_MIN;
        int j = 1;
        for (int i = 0; i < colors.size(); i++) {
            for (int j = i + 1; j < colors.size(); j++) {
                int currmax;
                if (colors[i] != colors[j]) {
                    currmax = abs(i - j);
                    if (currmax > max) {
                        max = currmax;
                    }
                }
                // j++;
            }
        }
        return max;
    }
};