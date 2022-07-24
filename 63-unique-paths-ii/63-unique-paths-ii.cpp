class Solution {
    // int mod=(int)(1e9+7);
//     int counts(int i,int j,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp)
//     {
//         if(i>=0 && j>=0 && obstacleGrid[i][j]==1)
//         {
//             return 0;
//         }
//         if(i==0||j==0)
//             return 1;
//         if(i<0||j<0)
//         {
//             return 0;
//         }
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }
        
        
//        int  up=counts(i-1,j,obstacleGrid,dp);
//         int left=counts(i,j-1,obstacleGrid,dp);
//         return  dp[i][j]=(left+up)%mod;
//     }
    // ________________-
    private:
    // int mod=(int)(1e9+7);
    // int countpaths(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp)
    // {
    //     if(i>=0 && j>=0 && obstacleGrid[i][j]==1)
    //     {
    //         return 0;
    //     }
    //     if(i==0 && j==0)
    //     {
    //         return 1;
    //     }
    //     if(i<0 ||j<0)
    //         return 0;
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     int up=countpaths(i-1,j,obstacleGrid,dp);
    //     int left=countpaths(i,j-1,obstacleGrid,dp);
    //     return dp[i][j]=(left+up);
    // }
    // ___________________----
    int getcnt(int i,int j,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp)
    {
        if(i>=0 && j>=0 &&obstacleGrid[i][j]==1)return 0;
        if(i==0 && j==0)
        {
            return 1;
        }
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int up=getcnt(i-1,j,obstacleGrid,dp);
        int left=getcnt(i,j-1,obstacleGrid,dp);
        return dp[i][j]=left+up;
    }
    
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       
//         int m=obstacleGrid.size();
//         int n=obstacleGrid[0].size();
//          int dp[m][n];
        
//         // return counts(m-1,n-1,obstacleGrid,dp);
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(obstacleGrid[i][j]==1)
//                 {
//                     dp[i][j]=0;
//                 }
//                 else if(i==0&&j==0)
//                 {
//                     dp[i][j]=1;
//                 }
//                 else {
//                     int up=0,left=0;
//                     if(i>0)
//                  up=dp[i-1][j];
//                     if(j>0)
//                  left=dp[i][j-1];
//                     dp[i][j]= (left+up);
//                 }
//             }
//         }
//         return dp[m-1][n-1];
        // __________________________-----
        
        // vector<vector<int>>dp(n,vector<int>(m,-1));
        // return countpaths(n-1,m-1,obstacleGrid,dp);
        
        // --------?
            int n=obstacleGrid.size();
            int m=obstacleGrid[0].size();
            vector<vector<int>>dp(n,vector<int>(m,-1));
            return getcnt(n-1,m-1,obstacleGrid,dp);
        // ____________________---
       //  int n=obstacleGrid.size();
       //  int m=obstacleGrid[0].size();
       //  int dp[n][m];
       // for(int i=0;i<n;i++)
       // {
       //     for(int j=0;j<m;j++)
       //     {
       //         if(obstacleGrid[i][j]==1)
       //         {
       //             dp[i][j]=0;
       //         }
       //         else if(i==0 && j==0)
       //             dp[i][j]=1;
       //        else
       //        {
       //            int up=0,left=0;
       //            if(i>0)
       //            up=dp[i-1][j];
       //            if(j>0)
       //          left=dp[i][j-1];
       //            dp[i][j]=(up+left);
       //        }
       //     }
       // }
       //  return dp[n-1][m-1];
        
    }
};