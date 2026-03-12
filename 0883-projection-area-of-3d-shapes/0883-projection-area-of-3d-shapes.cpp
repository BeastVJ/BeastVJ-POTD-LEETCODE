class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int sum1=0;
        for (int i=0;i<n;i++){
            int mx1=grid[i][0];
            for (int j=1;j<n;j++){
                mx1=max(mx1,grid[i][j]);
            }
            sum1+=mx1;
        }
        int sum2=0;
        for (int i=0;i<n;i++){
            int mx2=grid[0][i];
            for (int j=1;j<n;j++){
                mx2=max(mx2,grid[j][i]);
            }
            sum2+=mx2;
        }
        int zero=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    zero++;
                }
            }
        }
        int ans = (n*n-zero)+sum1+sum2;
        return ans;
    }
};