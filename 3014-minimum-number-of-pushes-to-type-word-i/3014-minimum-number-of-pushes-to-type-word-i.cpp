class Solution {
public:
    int minimumPushes(string word) {
        int len = word.length();
        int res = 0;
        for(int i = 0; i< len; i++){
            res += floor(i / 8) + 1;
        }
        return res;
    }
};