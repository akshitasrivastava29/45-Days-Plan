class Solution {
//     int fun(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
//     {
        
//         if(i==0 && j==0)
//         {
//             return grid[i][j];
//         }
//         if(i<0 || j<0)
//         {
//             return 1e9;
//         }
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }
//         int up=0;
//         // if(i>0)
//         up=grid[i][j]+fun(i-1,j,grid,dp);
//         int left=0;
//         // if(j>0)
//         left=grid[i][j]+fun(i,j-1,grid,dp);
//         return min(left,up);
    int getsum(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(i==0 && j==0)
        {
            return grid[i][j];
        }
        if(i<0 || j<0)return 1e9;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int up=0,left=0;
        up=grid[i][j]+getsum(i-1,j,grid,dp);
        left=grid[i][j]+getsum(i,j-1,grid,dp);
        return min(left,up);
    }
        
        
        
//     }
    // private:
    // int countsum(int i,int j,vector<vector<int>>&grid)
    // {
    //     if(i==0 && j==0)return grid[0][0];
    //     if(i<0 || j<0)return 1e9;
    //     int up=0,left=0;
    //     up=grid[i][j]+countsum(i-1,j,grid);
    //     left=grid[i][j]+countsum(i,j-1,grid);
    //     return min(up,left);
    // }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        // vector<vector<int>>dp(n,vector<int>(m,-1));
        // // return fun(n-1,m-1,grid,dp);
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(i==0 && j==0)
        //         {
        //             dp[i][j]=grid[i][j];
        //         }
        //         else
        //         {
        //             int up=grid[i][j];
        //             if(i>0)
        //                 up+=dp[i-1][j];
        //             else
        //             {
        //                 up+=1e9;
        //             }
        //             int left=grid[i][j];
        //             if(j>0)
        //                 left+=dp[i][j-1];
        //             else
        //             {
        //                 left+=1e9;
        //             }
        //             dp[i][j]=min(left,up);
        //         }
        //     }
        // }
        // return dp[n-1][m-1];
        // ---------
//         int n=grid.size();
//         int m=grid[0].size();
//         // return countsum(n-1,m-1,grid );
//       vector<vector<int>>dp(n,vector<int>(m,-1));
//         for(int i=0;i<n;i++)
//         {
//              for(int j=0;j<m;j++)
//              {
//                  if(i==0 && j==0)
//                  {
//                      dp[i][j]=grid[i][j];
//                  }
//                  else
//                  {
//                      int up=grid[i][j];
//                      if(i>0)
//                      up+=dp[i-1][j];
//                      else
//                      {
//                         up+=1e9;
//                      }
//                      int left=grid[i][j];
//                      if(j>0)
//                          left+=dp[i][j-1];
//                      else
//                      {
//                          left+=1e9;
//                      }
//                      dp[i][j]=min(up,left);
//                  }
                
//              }
//         }
//         return dp[n-1][m-1];
        // ------
//         vector<vector<int>>dp(n,vector<int>(m,-1));
//         return getsum(n-1,m-1,grid,dp);
        // ----------
        int dp[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=grid[i][j];
                }
                else
                {
                    int up=grid[i][j];
                    if(i>0)
                    up+=dp[i-1][j];
                    else
                    {
                        up+=1e9;
                    }
                    int left=grid[i][j];
                    if(j>0)
                    left+=dp[i][j-1];
                    else
                    {
                        left+=1e9;
                    }
                    dp[i][j]=min(up,left);
                }
                
            }
        }
        return dp[n-1][m-1];
        
       
    }
};