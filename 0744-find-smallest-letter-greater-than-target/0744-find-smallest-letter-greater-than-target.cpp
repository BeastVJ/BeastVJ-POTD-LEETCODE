class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int max= INT_MIN;
        char ans;
        for(int i=0; i<letters.size(); i++){
            if(int(letters[i]) > int(target) ){
                return ans = letters[i] ;

            }
        }
        if(ans == '\0') return letters[0];
        return 0;
    }
};