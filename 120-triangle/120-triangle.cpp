class Solution {
    // private:
    // int fun(vector<vector<int>>&triangle,int i,int j,vector<vector<int>>&dp)
    // {
    //         int n=triangle.size();
    //         if(i==n-1)
    //         {
    //             return triangle[n-i][j];
    //         }
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     int down=triangle[i][j]+fun(triangle,i+1,j,dp);
    //     int diagonal=triangle[i][j]+fun(triangle,i+1,j+1,dp);
    //     return dp[i][j] =min(down,diagonal);
    // }
//     private:
//     int countsteps(vector<vector<int>>&triangle,int i,int j,vector<vector<int>>&dp)
//     {
//         int n=triangle.size();
//         if(i==n-1)
//         {
//             return triangle[n-1][j];
//         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         int down=triangle[i][j]+countsteps(triangle,i+1,j,dp);
//         int dgn=triangle[i][j]+countsteps(triangle,i+1,j+1,dp);
//         return dp[i][j]= min(down,dgn);
        
//     }
    
public:
    int minimumTotal(vector<vector<int>>& triangle) {
            int n=triangle.size();
            // vector<vector<int>>dp(n,vector<int>(n,-1));
// //         for(int j=0;j<n;j++)
// //         {
// //             dp[n-1][j]=triangle[n-1][j];
// //         }
// //         for(int i=n-2;i>=0;i--)
// //         {
// //             for(int j=i;j>=0;j--)
// //             {
// //                 int down=triangle[i][j]+dp[i+1][j];
// //                 int daigonal=triangle[i][j]+dp[i+1][j+1];
// //                 dp[i][j]=min(down,daigonal);
// //             }
// //         }
        
        
//         return countsteps( triangle,0,0,dp);
        // ------
        // for(int j=0;j<n;j++)
        // {
        //     dp[n-1][j]=triangle[n-1][j];
        // }
        // for(int i=n-2;i>=0;i--)
        // {
        //     for(int j=i;j>=0;j--)
        //     {
        //         int down=triangle[i][j]+dp[i+1][j];
        //         int dgnl=triangle[i][j]+dp[i+1][j+1];
        //         dp[i][j]=min(down,dgnl);
        //     }
        // }
        // return dp[0][0];
        // ---------------
        int dp[n][n];
        for(int j=0;j<n;j++)
        {
            dp[n-1][j]=triangle[n-1][j];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down=triangle[i][j]+dp[i+1][j];
                int dgnl=triangle[i][j]+dp[i+1][j+1];
                dp[i][j]=min(down,dgnl);
            }
        }
        return dp[0][0];
    }
};