class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> st(nums.begin(), nums.end());
        vector<int> vec(st.begin(), st.end());
    

        int ans = 1;
        int cnt = 1;
        for(int i = 1; i< vec.size(); i++){
            cout<<vec[i]<<" ";
            if(vec[i] == vec[i-1] + 1){
                cnt++;
            }else 
                cnt = 1;
            ans = max(cnt, ans);
        }
        return ans;
    }
};