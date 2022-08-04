class Solution {
public:
    // double dp[30][30][105];
    // vector<int>dx={-2,-2,-1,1,2,2,1,-1};
    // vector<int>dy={-1,1,2,2,1,-1,-2,-2};
    // double dfs(int i,int j,int n,int moves)
    // {
    //     if(i<0 || i>=n || j<0 || j>=n)return 0;
    //     if(moves<=0)return 1;
    //     if(dp[i][j][moves]!=0)
    //     {
    //         return dp[i][j][moves];
    //     }
    //      double ans=0;
    //     for(int k=0;k<8;k++)
    //     {
    //         int newx=i+dx[k];
    //         int newy=j+dy[k];
    //         ans+=dfs(newx,newy,n,moves-1);
    //     }
    //     return dp[i][j][moves]=ans/8.0;
    // }
    
    double dp[29][29][104];
    vector<int>dx={-2,-2,-1,1,2,2,1,-1};
    vector<int>dy={-1,1,2,2,1,-1,-2,-2};
    double getprob(int i,int j,int n,int moves)
    {
        if(i<0 || i>=n || j<0 || j>=n)return 0;
        if(moves<=0)return 1;
        if(dp[i][j][moves]!=0)
        {
            return dp[i][j][moves];
        }
        double ans=0;
        for(int t=0;t<8;t++)
        {
            int newx=i+dx[t];
            int newy=j+dy[t];
            ans+=getprob(newx,newy,n,moves-1);
        }
        return dp[i][j][moves]=ans/8.0;
    }
    
    double knightProbability(int n, int k, int row, int column) {
        // memset(dp,0,sizeof(dp));
        // return dfs(row,column,n,k);
        
        memset(dp,0,sizeof(dp));
        return getprob(row,column,n,k);
        
    }
};