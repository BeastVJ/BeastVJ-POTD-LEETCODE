class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> count;
        for(int num : nums){
            count[num]++;
        }
        int ans = 0;

        if(count[1] % 2 == 0){
            ans = count[1]-1;
        }else{
            ans = count[1];
        }
        count.erase(1);
        for(auto& [num, _]: count){
            int res = 0;
            long long x = num;
            for(; count.contains(x) && count[x] > 1; x *= x){
                res += 2;
            }
            ans = max(ans, res + (count.contains(x) ? 1 : -1));
        }
        return ans;
    }
};