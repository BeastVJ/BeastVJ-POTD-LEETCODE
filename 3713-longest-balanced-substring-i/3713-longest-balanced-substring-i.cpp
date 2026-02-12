class Solution {
public:
    int longestBalanced(string s) {
        map<char, int> wordcount;
        char word;
        for (char x : s) {
            wordcount[x]++;
            cout << wordcount[x];
        }
        vector<int> vt;
        for(auto element : wordcount){
            vt.push_back(element.second);
            cout<<vt[element];
        }
        // sort(wordcount.begin(), wordcount.end());
        // int n= wordcount.size();
        // int ans= INT_MIN;
        // for(i= n-1; i>=0; i--){
        //     int currans = wordcount[i];
        //     if(wordcount[i] == wordcount[i-1]){
        //         currans *= wordcount[i-1];
        //         if(ans < currans){
        //             ans = currans;
        //         }

        //     }
        //     else currans = 1;
        // }
        return ans;
    }
};