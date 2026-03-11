class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();

        map<int, int> mp;
        vector<vector<int>> result;

        for(int i = 0; i< m; i++){
            int id = nums1[i][0];
            int val = nums1[i][1];
            mp[id]+= val;
        }

        for(int j = 0; j< n; j++){
            int id = nums2[j][0]; 
            int val = nums2[j][1];
            mp[id]+= val; 
        }

        for(auto &it: mp){
            int key = it.first;
            int value = it.second;

            result.push_back({key, value});
        }
        // sort(begin(result), end(result));

        return result;
    }
};