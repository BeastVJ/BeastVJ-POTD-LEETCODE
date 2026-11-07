class Solution {
public:
    // vijay singh bisht
    // at Kdwarahat
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
            
        }
    }
};