class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int odd = 0;
        int even = 0;

        int minm = *min_element(nums1.begin(), nums1.end());

        for(int x: nums1){
            if(x % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }

        if(odd == 0 || even == 0) return true;
        if(minm % 2 == 1) return true;

        return false;
    }
};