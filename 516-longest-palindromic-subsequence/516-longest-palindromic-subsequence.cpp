class Solution {
    private:
// int LCS(string s,string s2)
// {
//     int n=s.length();
//     int m=s2.length();
//          // string s2=reverse(s.begin(),s.end());
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
//         for(int i=0;i<=n;i++)
//             dp[i][0]=0;
//         for(int j=0;j<=m;j++)
//             dp[0][j]=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(s[i-1]==s2[j-1])
//                 {
//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else
//                 {
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[n][m];
        
       
        
// }
//     int LCS(string s,string s2)
//     {
//         int n=s.length();
//         int m=s2.length();
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
//         for(int i=0;i<=n;i++)
//             dp[i][0]=0;
//         for(int j=0;j<=m;j++)
//             dp[0][j]=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(s[i-1]==s2[j-1])
//               {
//                     dp[i][j]=1+dp[i-1][j-1];
//                 }
//                 else
//                 {
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[n][m];
        
//     }
    int LCS(string s,string rs)
    {
        int n=s.length();
        int m=rs.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++) dp[i][0]=0;
        for(int j=0;j<=m;j++) dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==rs[j-1])
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
    
public:
    int longestPalindromeSubseq(string s) {
        // int n =s.length();
        // string s2=s;
        // reverse(s2.begin(),s2.end());
        // return LCS(s,s2);
        
        
        // int n=s.length();
        // string s2=s;
        // reverse(s2.begin(),s2.end());
        // return LCS(s,s2);
        
        
        string rs=s;
        reverse(rs.begin(),rs.end());
        return LCS(s,rs);
        
        
        
        
        
    }
};