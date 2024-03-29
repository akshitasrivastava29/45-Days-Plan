class Solution {
    private:
    // int countpath(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    // {
    //     int n=matrix.size();
    //     int m=matrix[0].size();
    //     if(j<0 || j>=m)return 1e9;
    //     if(i==0)return matrix[0][j];
    //     if(dp[i][j]!=-1)
    //     {
    //         return dp[i][j];
    //     }
    //     int up=matrix[i][j]+countpath(i-1,j,matrix,dp);
    //     int leftdg=matrix[i][j]+countpath(i-1,j-1,matrix,dp);
    //     int rghtdg=matrix[i][j]+countpath(i-1,j+1,matrix,dp); 
    //     return dp[i][j]= min(up,min(leftdg,rghtdg));
    // }
    int getcnt(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        if(j<0 || j>=m)return 1e9;
        if(i==0)return matrix[0][j];
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int up=matrix[i][j]+getcnt(i-1,j,matrix,dp);
        int ld=matrix[i][j]+getcnt(i-1,j-1,matrix,dp);
        int rd=matrix[i][j]+getcnt(i-1,j+1,matrix,dp);
        return dp[i][j]=min(up,min(ld,rd));
    }
   
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
//         
        int n=matrix.size();
        int m=matrix[0].size();
        // vector<vector<int>>dp(n,vector<int>(m,-1));
        // int mini=1e9;
        // for(int j=0;j<m;j++)
        // {
        //     mini=min(mini,countpath(n-1,j,matrix,dp));
        // }
        // return mini;
        // ___________________________________--
        // vector<vector<int>>dp(n,vector<int>(m,0));
        // for(int j=0;j,m;j++)
        // {
        //     dp[0][j]=matrix[0][j];
        // }
        //     for(int i=1;i<n;i++)
        //     {
        //         for(int j=0;j<m;j++)
        //         {
        //             int up=matrix[i][j]+dp[i-1][j];
        //             int ld=matrix[i][j];
        //             if(j-1>0)
        //                 ld+=dp[i-1][j-1];
        //             else
        //             {
        //                 ld+=1e9;
        //             }
        //             int rd=matrix[i][j];
        //             if(j+1<m)
        //                 rd+=dp[i-1][j+1];
        //             else
        //             {
        //                 rd+=1e9;
        //             }
        //             dp[i][j]=min(up,min(ld,rd));
        //         }
        //     }
        // int mini=1e9;
        // for(int j=0;j<m;j++)
        // {
        //     mini=min(mini,dp[n-1][j]);
        // }
        // return mini;
        // ---
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int mini=1e9;
        for(int j=0;j<m;j++)
        {
            mini=min(mini,getcnt(n-1,j,matrix,dp));
        }
        return mini;
        
    }
};