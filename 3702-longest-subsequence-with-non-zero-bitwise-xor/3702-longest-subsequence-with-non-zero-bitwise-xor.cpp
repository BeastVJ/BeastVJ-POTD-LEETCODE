class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        bool zero=true;
        for(int num:nums){
            ans ^= num;
            if(ans!=0) zero = false;
        }
        if(zero) return 0;
        if(ans != 0) return n;
        else return n-1;
    }
};