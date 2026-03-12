class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        map<char, int> mp;

        for (int i = 0; i < 26; i++) {
            mp[order[i]] = i;
        }

        for (int i = 0; i < words.size() - 1; i++) {

            string first = words[i];
            string second = words[i + 1];
            int len = min(first.length(), second.length());
            bool check = false;
            for (int k = 0; k < len; k++) {

                if (first[k] != second[k]) {

                    if (mp[first[k]] > mp[second[k]]){
                        return false;
                    }
                    check = true;
                    break;
                }
            }

            if (!check && first.length() > second.length())
                return false;
        }

        return true;
    }
};