class Solution {
public:
    int checkkaro(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return 0;
            }
        }
        return 1;
    }

    int minimumPairRemoval(vector<int>& nums) {
        // vector<int> arr;
        int n = nums.size();
        int count = 0;
        while (checkkaro(nums) == 0) {
            int minSum = INT_MAX;
            int p, q;
            for (int i = 0; i < n - 1; i++) {
                int currSum = nums[i] + nums[i + 1];

                if (currSum < minSum) {
                    minSum = currSum;
                    p = i;
                    q = i + 1;
                }
                // cout << nums[i] << nums[i + 1] << endl;
            }

            nums[p]=minSum;
            nums.erase(nums.begin() + q);
            for(int i = 0; i< nums.size(); i++){
                cout<< nums[i]<<" ";
            }
            cout<<endl;

            count++;
            n--;
        }
        // cout << minSum;

        return count;
    }
};
