class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> first;
        vector<int> second;
        vector<int> last;
        for(int it: nums){
            if(it < pivot){
                first.push_back(it);
            }
        }

        for(int it: nums){
            if(it > pivot){
                second.push_back(it);
            }
        }
        int count = 0;
        for(int i = 0 ; i< nums.size(); i++){
            if(nums[i] == pivot){
                count++;
            }
        }
        // sort(first.begin(), first.end(), greater<>());
        // sort(second.begin(), second.end());
        for(int st: first){
            last.push_back(st);
        }
        for(int i = 0; i < count ; i++){
            last.push_back(pivot);
        }
        for(int st: second){
            last.push_back(st);
        }
        return last;

    }
};