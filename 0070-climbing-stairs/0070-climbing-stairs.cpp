class Solution {
public:
    int fibHelp(int n, int b, int a) {
        if (n == 0) {
            return b;
        }
        return fibHelp(n - 1, a, a + b);
    }
    int fib(int n) { return fibHelp(n, 1, 1); }
    int climbStairs(int n) { return fib(n); }
};