class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int , vector<int>> pos;

        for(int i=0; i<nums.size(); i++){
            pos[nums[i]].push_back(i);
            
        }
        long long ans  = LLONG_MAX;

        for(auto &p: pos){
            auto &v = p.second;
            int m = v.size();

            if(m < 3 )continue;

            for(int i=0; i+2 < m; i++){
                ans = min (ans, 2LL * (v[i+2] - v[i]));
            }
        }
        return ans == LLONG_MAX  ? -1 : (int)ans;
    }
};