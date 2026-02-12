class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0; i< n; i++){
            vector<int> freq(26,0);
            for(int j=i; j< n; j++){
                freq[s[j] - 'a']++;

                int minFreq = INT_MAX, maxFreq=0;
                for(int f : freq){
                    if(f > 0){
                        minFreq = min(minFreq, f);
                        maxFreq = max(maxFreq, f);
                    }
                }
                if(minFreq == maxFreq){
                    ans = max(ans, j-i+1);
                }
            }
        }
        return ans;
    }
};