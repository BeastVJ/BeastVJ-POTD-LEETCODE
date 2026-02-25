class Solution {
public:

    int countBits(int num){
        int count = 0;
        while(num != 0){
            count += num & 1;
            num >>= 1;
        }

        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {

        auto lambda = [&] (int &a, int &b){
            int countA = countBits(a);
            int countB = countBits(b);

            if(countA == countB){
                return a <b;

            }

            return countA<countB;
        };
        
        sort(arr.begin(), arr.end(), lambda);

        return arr;
    }
};