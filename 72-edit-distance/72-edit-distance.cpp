class Solution {
//     private:
//     int fun(int i,int j,string&word1, string &word2,vector<vector<int>>&dp)
//     {
//         if(i<0)return j+1;
//         if(j<0)return i+1;
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }

//         if(word1[i]==word2[j])
//         {
//            return dp[i][j]=  0+fun(i-1,j-1,word1,word2,dp);
//         }
//         else
//         {
//            return dp[i][j]= 1+min(fun(i-1,j-1,word1,word2,dp),min(fun(i,j-1,word1,word2,dp),fun(i-1,j,word1,word2,dp))); 
//         }
//     }
    // ----
//     int operations(int i,int j ,string word1, string word2,vector<vector<int>>&dp)
//     {
//         if(i<0)return j+1;
//         if(j<0)return i+1;
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }
//         if(word1[i]==word2[j])
//         {
//             return dp[i][j]=0+operations(i-1,j-1,word1,word2,dp);
//         }
//         else
//         {
//             return dp[i][j]=1+min(operations(i-1,j,word1,word2,dp),min(operations(i,j-1,word1,word2,dp),operations(i-1,j-1,word1,word2,dp)));
            
//         }
//     }
    // -------
    int numop(int i,int j,string word1,string word2,vector<vector<int>>&dp)
    {
        if(i<0)return j+1;
        if(j<0)return i+1;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(word1[i]==word2[j])
        {
            return dp[i][j]=  0+numop(i-1,j-1,word1,word2,dp);
        }
        else
        {
            return dp[i][j]=  1+min(numop(i,j-1,word1,word2,dp),min(numop(i-1,j,word1,word2,dp),numop(i-1,j-1,word1,word2,dp)));
        }
        
    }
public:
    int minDistance(string word1, string word2) {
        // int n=word1.size();
        // int m=word2.size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // // return fun(n-1,m-1,word1,word2,dp);
        // for(int i=0;i<=n;i++)
        //     dp[i][0]=i;
        // for(int j=0;j<=m;j++)
        //     dp[0][j]=j;
        // for(int i=1;i<=n;i++)
        // {
        //      for(int j=1;j<=m;j++)
        //      {
        //          if(word1[i-1]==word2[j-1])
        //          {
        //              dp[i][j]=dp[i-1][j-1];
        //          }
        //          else
        //          {
        //              dp[i][j]=1+min(dp[i-1][j-1],min((dp[i][j-1]),dp[i-1][j]));
        //          }
        //      }
        // }
        // return dp[n][m];
        
//         int n=word1.length();
//         int m=word2.length();
//         vector<vector<int>>dp(n,vector<int>(m,-1));
//         return operations(n-1,m-1,word1,word2,dp);
        
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return numop(n-1,m-1,word1,word2,dp);
        
        
    }
};