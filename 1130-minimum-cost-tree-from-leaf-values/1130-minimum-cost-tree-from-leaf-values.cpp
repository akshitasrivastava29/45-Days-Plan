class Solution {
//     int maxi(vector<int>&arr,int i,int j)
//     {
//         int res=0;
//         for(int t=i;t<=j;t++)
//         {
//             res=max(res,arr[i]);
            
//         }
//         return res;

//     }
    int maxInRange(vector<int>& v, int l, int r) {
        int res = 0;
        for(int i = l; i <= r; ++i) res = max(res, v[i]);
        return res;
    }
    public:
    int mctFromLeafValues(vector<int>& arr) {
//         int n=arr.size();
//         vector<vector<int>>dp(n,vector<int>(n));
//         for(int i=n-1;i>=0;--i)
//         {
//             for(int j=i;j<=n-1;j++)
//             {
//                 if(i==j)
//                 {
//                     dp[i][j]=0;
//                 }
//                 else if(i+1==j)
//                 {
//                     dp[i][j]=arr[i]*arr[j];
//                 }
//                 else
//                 {
//                     dp[i][j]=INT_MAX;
//                     for(int k=i;k<j;k++)
//                     {
//                         int sum=dp[i][k]+dp[k+1][j];
//                         sum+=maxi(arr,i,k)*maxi(arr,k+1,j);
//                         dp[i][j]=min(dp[i][j],sum);
//                     }
//                 }
//             }
//         }
//         return dp[0][n-1];
        vector<vector<int>> tab(arr.size(), vector<int>(arr.size()));
        
        for(int l = arr.size() - 1; l >= 0; --l) {
            for(int r = l; r <= arr.size() - 1; ++r) {
                if (l == r) {
                    tab[l][r] = 0;
                } else if (l + 1 == r) {
                    tab[l][r] = arr[l] * arr[r];
                } else {
                    tab[l][r] = INT_MAX;
                    // O(m ^ 2), where m = r - l.
                    for(int leftLast = l; leftLast < r; ++leftLast) {
                        int sum = tab[l][leftLast] + tab[leftLast+1][r];
                        sum += maxInRange(arr, l, leftLast) * maxInRange(arr, leftLast+1, r);
                        tab[l][r] = min(tab[l][r], sum);
                    }
                }
            }
        }
        
        return tab[0][arr.size() - 1];
    }
};