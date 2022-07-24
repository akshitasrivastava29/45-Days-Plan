class Solution {
//     int count(int n,int m,vector<vector<int>>&dp)
//     {
       
//         int i,j;
//         if(i==0&&j==0)
//         {
//             return 1;
//         }
//         if(i<0||j<0)
//         {
//             return 0;
//         }
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }
//         int up=count(i-1,j,dp);
//         int left=count(i,j-1,dp);
//         return dp[i][j]= up+left;
//     }
    // private:
    // int countpaths(int i,int j,int m,int n,vector<vector<int>>&dp)
    // {
    //     if(i==(m-1) && j==(n-1))
    //     {
    //         return 1;
    //     }
    //     if(i>=m || j>=n)
    //     {
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     else 
    //     return dp[i][j]= countpaths(i+1,j,m,n,dp)+countpaths(i,j+1,m,n,dp);
    // }
    // ________________-
 // */
    // int countpaths(int i,int j,vector<vector<int>>&dp)
    // {
    //     if(i==0 && j==0)
    //     {
    //         return 1;
    //     }
    //     if(i<0 || j<0)
    //     {
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     int up=countpaths(i-1,j,dp);
    //     int left=countpaths(i,j-1,dp);
    //     return dp[i][j] =up+left;
    // }
    int getcnt(int i,int j,vector<vector<int>>&dp)
    {
        if(i==0 && j==0)
        {
            return 1;
        }
        if(i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int up=getcnt(i-1,j,dp);
        int left=getcnt(i,j-1,dp);
        return dp[i][j]=up+left;
    }
public:
    int uniquePaths(int m, int n) {
    //     int dp[m][n];
    //     for(int i=0;i<m;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             if(i==0&&j==0)
    //                 dp[i][j]=1;
    //             else
    //             {
    //                 int up=0;
    //                 int left=0;
    //                 if(i>0)
    //                     up=dp[i-1][j];
    //                 if(j>0)
    //                     left=dp[i][j-1];
    //                 dp[i][j]=left+up;
    //             }
    //         }
    //     }
    //     return dp[m-1][n-1];
        // _________________------
       //  vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       // int num= countpaths(0,0,m,n,dp);
       //  if(m==1 && n==1)
       //  {
       //      return num;
       //  }
       //  return dp[0][0];
        // ____________________________
        // vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        // return countpaths(m-1,n-1,dp);
        
        
        
        // *tabulation*
        // int dp[m][n];
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i==0 && j==0)
        //         {
        //             dp[i][j]=1;
        //         }
        //         else{
        //         int up=0,left=0;
        //         if(i>0) up=dp[i-1][j];
        //         if(j>0)left=dp[i][j-1];
        //         dp[i][j]=up+left;
        //         }
        //     }
        // }
        // return dp[m-1][n-1];
        
        // ------------
        // int dp[m][n];
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i==0 && j==0)
        //         {
        //             dp[i][j]=1;
        //         }
        //         else
        //         {
        //             int up=0,left=0;
        //             if(i>0)up+=dp[i-1][j];
        //             if(j>0)left+=dp[i][j-1];
        //             dp[i][j]=up+left;
        //         }
        //     }
        // }
        // return dp[m-1][n-1];
        // ---------
        
//         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
//         return getcnt(m-1,n-1,dp);
        // ________________-----TAbULATON
        
        int dp[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=1;
                }
                else
                {
                    int up=0,left=0;
                    if(i>0) up+=dp[i-1][j];
                    if(j>0) left+=dp[i][j-1];
                    dp[i][j]=up+left;
                    
                }
            }
        }
        return dp[m-1][n-1];
        
    }
};