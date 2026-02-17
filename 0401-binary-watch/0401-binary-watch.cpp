class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int h = 0; h<= 11; h++){
            for(int m = 0; m<= 59; m++){
                bitset<32> bh(h) , bm(m);
                int x = bh.count();
                int y = bm.count();
                if(x+y== turnedOn) {
                    res.push_back((h + '0') + ":" + ((m < 10) ? + '0' + ))
                }

            }
        }
        return {};
    }
};