class Solution {
public:
    // vijay singh bisht
    // at midway
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char , int> mp1;
        map<char , int> mp2;
        for(auto it: s){
            mp1[it]++;
        }
        for(auto it: t){
            mp2[it]++;
        }
        for(auto it : mp1){
            char key = it.first;
            if(mp1[key] != mp2[key]){
                return false;
            }
        }
        return true;
    }
};
        // naive approach never do it
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s != t) return false;
        // return true;