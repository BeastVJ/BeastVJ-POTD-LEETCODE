class Solution {
public:

    bool check(vector<int>&v, int m, int mid){
        int n=v.size();
        int num=v[0];
        int c=1;
        for(int i=1; i<n; i++){
            if(v[i]-num>=mid){
                c++;
                num=v[i];
            }
        }
        return c>=m;
    }

    int maxDistance(vector<int>& v, int m) {
        int n=v.size();
        sort(v.begin(),v.end());
        int s=1;
        int ans=s;
        int e=v[n-1]-v[0];

        while(s<=e){
            int mid=(s+e)/2;
            if(check(v,m,mid)){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};//leetcode