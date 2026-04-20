class Solution {
public:
    // vijay singh bisht
    // 11:30 at 204
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int last = colors[n-1];
        int i = 0;
        int max;
        while(i <= n-2){
            if(colors[i] != last){
                max = abs( (n-1) - i);
                return max;
            }
            else{
                i++;
            }
        }
        
        return max;
    }
};