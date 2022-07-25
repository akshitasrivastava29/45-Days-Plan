class Solution {
    private:
    // int LCS(string a,string b,int n ,int m)
    // {
    //     int t[n+1][m+1];
    //     for(int i=0;i<=n;i++)
    //     {
    //         for(int j=0;j<=m;j++)
    //         {
    //             if(i==0||j==0)
    //             {
    //                 t[i][j]=0;                
    //             }
    //             else if(a[i-1]== b[j-1])
    //             {
    //                 t[i][j]=1+t[i-1][j-1];
    //             }
    //             else
    //             {
    //                 t[i][j]=max(t[i][j-1],t[i-1][j]);
    //             }
    //         }
    //      }
    //     return t[n][m];
    // }
    // void reverse(string  &s)
    // {
    //     int n=s.length();
    //     for(int i=0;i<n/2;i++)
    //     {
    //         swap(s[i],s[n-i-1]);
    //     }
    // }
    // int LCS(string s,string s2)
    // {
    //     int n=s.length();
    //     int m=s2.length();
    //     int dp[n+1][m+1];
    //     for(int i=0;i<=n;i++)
    //         dp[i][0]=0;
    //     for(int j=0;j<=m;j++)
    //         dp[0][j]=0;
    //     for(int i=1;i<=n;i++)
    //     {
    //         for(int j=1;j<=m;j++)
    //         {
    //             if(s[i-1]==s2[j-1])
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
    int LCS(string s,string rs)
    {
        int n=s.length();
        int m=rs.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)dp[i][0]=0;
        for(int j=0;j<=m;j++)dp[0][j]=0;
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
    int minInsertions(string s) {
        // int n=s.length();
        // string rev=" ";
        // rev=s;
        // reverse(rev);
        // return (n-LCS(s,rev,n,n));
        
        // int n=s.length();
        // string s2=s;
        // reverse(s2.begin(),s2.end());
        // return (n-LCS(s,s2));
        int n=s.length();
        string rs=s;
        reverse(rs.begin(),rs.end());
        return (n-LCS(s,rs));
        
        
    }
};