class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = INT_MIN;
        for(int i=0; i< nums.size(); i++){
            if(nums[i]== 0){
                count = 0;
            }
            else if(nums[i]==1){
                count++;
            }
            if(maxcount < count){
                maxcount = count;
            }
        }
        return maxcount;
    }
};