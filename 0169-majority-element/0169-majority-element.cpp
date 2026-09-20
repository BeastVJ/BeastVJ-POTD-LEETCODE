class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int person = 0;
        int count = 0;

        for(int it: nums){
            if(count == 0)
            person = it;

            if(it == person){
                count++;
            }else{
                count--;
            }
        }
        return person;
    }
};
        // approach 1
        // map<int, int> mp;

        // for (auto x : nums) {
        //     mp[x]++;
        // }

        // auto maxi = max_element(mp.begin(), mp.end(),
        //     [](const auto& a, const auto& b) {
        //         return a.second < b.second;
        //     });

        // return maxi->first;