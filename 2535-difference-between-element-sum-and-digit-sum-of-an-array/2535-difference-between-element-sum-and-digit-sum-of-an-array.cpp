class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int fsum = 0, ssum = 0;
        for(int it: nums){
            fsum += it;

            while(it> 0){
                ssum += it%10;
                it /= 10;
            }
        }

        return abs(fsum - ssum);
    }
};