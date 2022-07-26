class Solution {
    // private:
    // int num(string s,string t,int i,int j,vector<vector<int>>&dp)
    // {
    //     if(j<0)return 1;
    //     if(i<0)return 0;
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     if(s[i]==t[j])
    //     {
    //         return dp[i][j]= num(s,t,i-1,j-1,dp)+num(s,t,i-1,j,dp);
    //     }
    //     return dp[i][j]= num(s,t,i-1,j,dp);
    // }
//     private:
    int num(string&s,string &t,int i,int j,vector<vector<int>>&dp)
    {
        
        if(j<0)return 1;
        if(i<0)return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==t[j])
        {
            return  dp[i][j]= num(s,t,i-1,j-1,dp)+num(s,t,i-1,j,dp);
        }
        else
        {
            return  dp[i][j]= num(s,t,i-1,j,dp);
        }
    }
   
public:
    int numDistinct(string s, string t) {
//         int n=s.size();
//         int m=t.size();
//         vector<vector<double>>dp(n+1,vector<double>(m+1,0));
//         for(int i=0;i<=n;i++)
//             dp[i][0]=1;
//         for(int j=1;j<=m;j++)
//             dp[0][j]=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(s[i-1]==t[j-1])
//                 {
//                     dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
//                 }
//                 else
//                 {
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
         
//        return (int) dp[n][m]; 
        // --------
        int n=s.length();
        int m=t.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return num(s,t,n-1,m-1,dp);
        // ----------
        // int n=s.length();
        // int m=t.length();
        
        
    }
};