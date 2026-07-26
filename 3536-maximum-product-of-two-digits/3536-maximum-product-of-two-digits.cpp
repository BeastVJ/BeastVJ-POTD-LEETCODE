class Solution {
public:
    int maxProduct(int n) {

        vector<int> ans;

        while(n > 0){
            int digit = n % 10;
            // cout<<n;
            ans.push_back(digit);
            n /= 10;
        }
        sort(ans.begin(), ans.end());
        cout<<ans.back();
        cout<<ans[ans.size()-2];
        int sol = ans.back() * ans[ans.size()-2];
        return sol;
    }
};