class Solution {
    int dp[201][201];
    private:
    int dfs(int i,int j,vector<vector<int>>&matrix,int prev)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        if(i<0 || j<0 || i==n|| j==m || prev>=matrix[i][j]) 
        {
            return 0;
        }
        if(dp[i][j])
        return dp[i][j];
        int u=dfs(i-1,j,matrix,matrix[i][j]);
        int d=dfs(i+1,j,matrix,matrix[i][j]);
        int l=dfs(i,j-1,matrix,matrix[i][j]);
        int r=dfs(i,j+1,matrix,matrix[i][j]);
        return dp[i][j]=max({l,r,u,d,})+1;
        
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxval=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxval=max(maxval,dfs(i,j,matrix,-1));
            }
        }
        return maxval;
        
    }
};