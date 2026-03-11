class Solution {
public:
    int bitwiseComplement(int n) {
        string ans = "";
        if(n == 0) return 1;
        while (n > 0) {
            ans += n % 2 + '0';
            n = n / 2;
        }
        reverse(ans.begin(), ans.end());
        for (char& c : ans) {
            if (c == '0') {
                c = '1';
            } else
                c = '0';
        }

        int vijay = stoi(ans, nullptr, 2);
        return vijay;
    }
};