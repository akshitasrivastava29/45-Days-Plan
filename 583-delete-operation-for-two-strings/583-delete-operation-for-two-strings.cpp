class Solution {
    private:
    // int LCS(string word1,string word2,int n,int m)
    // {
    //     int t[n+1][m+1];
    //      for(int i=0;i<n+1;i++)
    //      {
    //         for(int j=0;j<m+1;j++)
    //         {
    //             if(i==0||j==0)
    //             {
    //                 t[i][j]= 0;
    //             }
    //         }
    //      }
    //     for(int i=1;i<n+1;i++)
    //     {
    //         for(int j=1;j<m+1;j++)
    //         {
    //             if(word1[i-1]==word2[j-1])
    //             {
    //                 t[i][j]=1+t[i-1][j-1];
    //             }
    //             else
    //             {
    //                 t[i][j]=max(t[i-1][j],t[i][j-1]);
    //             }
    //         }
    //     }
    //     return t[n][m];
    // }
    
    // ----------------
    // int LCS(string word1,string word2 )
    // {
    //     int n=word1.length();
    //     int m=word2.length();
    //     int dp[n+1][m+1];
    //     for(int i=0;i<=n;i++)dp[i][0]=0;
    //     for(int j=0;j<=m;j++)dp[0][j]=0;
    //     for(int i=1;i<=n;i++)
    //     {
    //         for(int j=1;j<=m;j++)
    //         {
    //             if(word1[i-1]==word2[j-1])
    //             {
    //                 dp[i][j]=1+dp[i-1][j-1];
    //             }
    //             else
    //             {
    //                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    //             }
    //         }
    //     }
    //     return dp[n][m];
    // }
    // ---------
    int LCS(string word1,string word2)
    {
        int n=word1.length();
        int m=word2.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)dp[i][0]=0;
        for(int j=0;j<=m;j++)dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
        
    }
public:
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        
         // int cnt=0;
        // int deleteop1=n-LCS(word1,word2,n,m);
        // cnt+=deleteop1;
        // int deleteop2=m-LCS(word1,word2,n,m);
        // cnt+=deleteop2;
        
        
        // int deleteop1=n-LCS(word1,word2);
        // cnt+=deleteop1;
        // int deleteop2=m-LCS(word1,word2);
        // cnt+=deleteop2;
    
        // return cnt;
        
        return (n+m-2*LCS(word1,word2));
    }
};