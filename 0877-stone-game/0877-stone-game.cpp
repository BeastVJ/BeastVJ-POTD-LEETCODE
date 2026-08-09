class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int aSum = 0;
        int bSum = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (i % 2 == 0) {
                aSum += piles[i];
            } else {
                bSum += piles[i];
            }
        }
        cout<<aSum<<"  "<<bSum;
        if (aSum > bSum) {
            return false;
        }

        return true;
    }
};