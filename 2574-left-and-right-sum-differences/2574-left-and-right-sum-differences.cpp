class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        // if(nums.size()== 1) return [0];
        int n = nums.size();
        vector<int> leftsum(n);
        vector<int> rightsum(n);
        vector<int> finalsum(n);

        leftsum[0] = 0;
        rightsum[n-1] = 0;

        //left 
        for(int i = 1; i < n; i++){
            leftsum[i] = leftsum[i-1] + nums[i-1];
        }

        //right
        for(int j = n-2; j >= 0; j--){
            rightsum[j] = rightsum[j+1] + nums[j+1];
        }

        //final
        for(int k = 0; k < n; k++){
            finalsum[k] = abs(leftsum[k] - rightsum[k]);
        }
        return finalsum;

    }
};