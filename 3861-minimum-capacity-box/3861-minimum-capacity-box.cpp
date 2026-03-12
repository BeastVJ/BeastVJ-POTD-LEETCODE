class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        // int count = 0;
        auto init = []() {
            ios::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);
            return 'c';
        }();
        int n = capacity.size();
        int min = INT_MAX;
        int finalans = -1;
        for (int i = 0; i < n; i++) {
            int currmin = 0;
            if (capacity[i] >= itemSize) {
                currmin = capacity[i];
                if (currmin < min) {
                    min = currmin;
                    finalans = i;
                }
            }
            cout << finalans << endl;
        }
        return finalans;
    }
};