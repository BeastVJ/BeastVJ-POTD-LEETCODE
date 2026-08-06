class Solution {
public:
    // vijay singh bisht
    // at midwat
    int smallestNumber(int n, int t) {
        // int first = n;        

        for(int i = n; i<= 100; i++){
            int product = 1;
            int curr = i;
            while(curr > 0){
                int prod = curr %10;
                product = prod * product; 
                curr /= 10;
            }
            if(product % t == 0){
                return i;
            }
        }
        return 0;
    }
};