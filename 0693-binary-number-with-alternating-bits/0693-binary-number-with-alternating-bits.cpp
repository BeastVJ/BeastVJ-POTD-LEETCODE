#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bits = bitset<32>(n).to_string();
        bits = bits.substr(bits.find('1'));
        for(int i = 0; i < bits.length() - 1; i++) {
            if(bits[i] == bits[i+1]) {
                return false;
            }
        }
        return true;
    }
};
