class Solution {
public:
    typedef long long  ll;
    // vijay singh bisht
    // 5:04 at library
// this question is based on minimizing the maximum or maximizing the minimum so in this type of question we apply binary search
    
     bool Check(ll mid, vector<int>& workerTimes, int mH) {
        ll h = 0;

        for(int &t : workerTimes) {
            h += (ll)(sqrt(2.0 * mid/t + 0.25) - 0.5);

            if(h >= mH) {
                return true;
            }
        }

        return h >= mH;
    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        int maxTime = *max_element(begin(workerTimes), end(workerTimes));
        ll l = 1;
        ll r = (ll)maxTime * mountainHeight * (mountainHeight+1)/2;
        ll result  = 0;

        // khandani template of binary search
        while(l <= r){
            ll mid = l + (r-l)/2;
            if(Check(mid, workerTimes, mountainHeight)){
                result = mid;
                r = mid - 1;
            }else{
                l = mid+1;
            }
        }
        return result;

    }
};