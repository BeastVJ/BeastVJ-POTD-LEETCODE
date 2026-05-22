class Solution {
public:
    int search(vector<int>& nums, int target) {
        int positions=-1;
        // int i=0;
        
        for(int i=0; i< nums.size(); i++){
            if(nums[i]== target){
                positions = i;
            }
            
        }    
        return positions;
        // int ans;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!= target){
        //         ans = -1;
        //     }
        // }
        // return ans;
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++)
        // if(true)return positions;

    }
};