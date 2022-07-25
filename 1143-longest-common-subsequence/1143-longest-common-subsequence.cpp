class Solution {
    // private:
    // int fun(int i,int j, string text1,string text2,vector<vector<int>>&dp)
    // {
    //     if(i<0 || j<0)
    //         return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     if(text1[i]==text2[j])
    //        {
    //            return 1+fun(i-1,j-1,text1,text2,dp);
    //        }
    //     return dp[i][j]= max(fun(i-1,j,text1,text2,dp),fun(i,j-1,text1,text2,dp));
    // }
    // private:
    // int count(int i,int j,string text1,string text2 ,vector<vector<int>>&dp)
    // {
    //     if(i<0 || j<0)
    //     {
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     if(text1[i]==text2[j])
    //     {
    //         return 1+count(i-1,j-1,text1,text2,dp);
    //     }
    //     return  dp[i][j]= max(count(i-1,j,text1,text2,dp),count(i,j-1,text1,text2,dp));
    // }
    
public:
    int longestCommonSubsequence(string text1, string text2) {
       
        // int n=text1.length();
        // int m=text2.length();
        // int t[n+1][m+1];
        // for(int i=0;i<n+1;i++)
        // {
        //     for(int j=0;j<m+1;j++)
        //     {
        //         if(i==0||j==0)
        //         {
        //          t[i][j]=0;
        //         }
        //     }
        // }
        // for(int i=1;i<n+1;i++)
        // {
        //     for(int j=1;j<m+1;j++)
        //     {
        //         if(text1[i-1]==text2[j-1])
        //         {
        //             t[i][j]=1+t[i-1][j-1];
        //         }
        //         else
        //         {
        //             t[i][j]=max(t[i-1][j],t[i][j-1]);
        //         }
        //     }
        // }
        // // return t[n][m];
        int n=text1.length();
        int m=text2.length();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // return fun(n-1,m-1,text1,text2,dp);
//         for(int i=0;i<=n;i++)dp[i][0]=0;
//         for(int j=0;j<=m;j++)dp[0][j]=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(text1[i-1]==text2[j-1])
//                 {
//                    dp[i][j]= 1+dp[i-1][j-1];
//                 }
//                 else
//                 {
//                     dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[n][m];
        // return count(n-1,m-1,text1,text2,dp);
        // -------------------
       // for(int i=0;i<=n;i++)
       //     dp[i][0]=0;
       //  for(int j=0;j<=m;j++)
       //      dp[0][j]=0;
       //  for(int i=1;i<=n;i++)
       //  {
       //      for(int j=1;j<=m;j++)
       //      {
       //          if(text1[i-1]==text2[j-1])
       //          {
       //              dp[i][j]=1+dp[i-1][j-1];
       //          }
       //          else
       //          {
       //              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
       //          }
       //      }
       //  }
       //  return dp[n][m];
        // ----
        int dp[n+1][m+1];
       for(int i=0;i<=n;i++)
       {
           dp[i][0]=0;
       }
        for(int j=0;j<=m;j++)
        {
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
        
        
    }
};