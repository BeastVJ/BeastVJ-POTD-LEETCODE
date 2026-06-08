class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> first;
        vector<int> second;
        vector<int> last;
        int count  = 0; 
        for(int it: nums){
            if(it < pivot){
                first.push_back(it);
            }
            if(it > pivot){
                second.push_back(it);
            }
            if(it == pivot){
                count++;
            }
        }
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