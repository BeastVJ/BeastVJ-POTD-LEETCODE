class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> mp;
        for(char it: magazine){
            mp[it]++;
        }
        for(char it: ransomNote){
            if(mp[it] <= 0){
                return false;
            }
            mp[it]--;
        }
        return true;
    }
};