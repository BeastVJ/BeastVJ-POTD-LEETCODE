class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int count = 0;
        int ans = 0;
        sort(cost.begin(), cost.end(), greater<>());
        for(int i = 0; i< cost.size(); i++){

            if(count == 2){
                count = 0;
                continue;
            }
            ans += cost[i];
            count++;
        }
        return ans;
    }
};