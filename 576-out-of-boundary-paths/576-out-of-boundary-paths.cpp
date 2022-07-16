class Solution {
    int mod=1e9+7;
    int dfs(int i,int j,int move, int m, int n,vector<vector<vector<int>>>&dp)
    {
        if(i<0 || i>=m || j<0 || j>=n)
        {
            return 1;
        }
        if(move==0)return 0;
        if(dp[move][i][j]!=-1)
        {
            return dp[move][i][j];
        }
        int up=dfs(i-1,j,move-1,m,n,dp)%mod;
        int down=(up+dfs(i+1,j,move-1,m,n,dp))%mod;
        int left=(down+dfs(i,j-1,move-1,m,n,dp))%mod;
        int right=(left+dfs(i,j+1,move-1,m,n,dp))%mod;
        
        return dp[move][i][j]=right%mod;
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int N=maxMove;
        vector<vector<vector<int>>>dp(N+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return dfs(startRow,startColumn,N,m,n,dp);
        
    }
};