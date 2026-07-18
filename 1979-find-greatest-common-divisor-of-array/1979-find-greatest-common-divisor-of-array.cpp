//Approach 1 
// class Solution {
// public:
//     int findGCD(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         cout<<nums[0]<<" "<<nums[n-1];
//         int num = gcd(nums[0], nums[n-1]);
//         return num;
//     }
// };



// Approach 2
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mn = nums[0];
        int mx = nums[n-1];
        int div= 0;


        for(int i = 1; i<=mx; i++){
            // cout<<i<<" ";
            // int currdiv = i;
            if(mn % i == 0 && mx % i == 0){
                div = i;
                cout<<div<<" ";
            }
            // if(currdiv > div ){
            //     div = currdiv;
            //     // cout<<div<<" ";
            // }
        }
        return div;
    }
};