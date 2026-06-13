class Solution {
public:
    // VIJAY SINGH BISHT
    // 04:55 AT midway
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        map<char, int> mp;
        for(char ch = 'z'; ch >= 'a'; ch--){
            mp[ch] = 'z'- ch;
        }
        string fans;
        for (string word : words) {
            int totalWeight = 0;

            for (char ch : word) {
                totalWeight += weights[ch - 'a'];
            }
            // cout << totalWeight << endl;
            int ans = totalWeight % 26;
            // mp.find(ans)
            char chu = 'z' - ans;
            fans += chu;
            cout<<chu;
        }

        return fans;
    }
};