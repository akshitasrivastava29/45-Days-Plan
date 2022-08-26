class Solution {
    int mod=1e9+7;
    int dfs(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&grid,int prev)
    {
        
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n|| j>=m || prev>=grid[i][j]){
            return 0 ;
        }
        if(dp[i][j]!=-1)
        
         return dp[i][j];
        int ans=1;
        int di[4]={1,-1,0,0};
        int dj[4]={0,0,1,-1};
        for(int ind=0;ind<4;ind++)
        {
            int newi=i+di[ind];
            int newj=j+dj[ind];
            ans=(ans+dfs(newi,newj,dp,grid,grid[i][j]))%mod;
        }
       return dp[i][j]=ans; 
    }
public:
    int countPaths(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=(ans+dfs(i,j,dp,grid,-1))%mod;
            }
        }
       return ans; 
        
    }
};