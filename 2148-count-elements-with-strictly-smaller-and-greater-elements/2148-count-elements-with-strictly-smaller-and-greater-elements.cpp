class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        vector<int> vt;
        for(int it: nums){
            vt.push_back(it);
        }
        sort(vt.begin(), vt.end());
        int n = vt.size();
        int small = vt[0];
        int max = vt[n-1];
        cout<<small<<" "<<max;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] > small && nums[i]< max){
                count++;
            }
        }
        return count;
    }
};