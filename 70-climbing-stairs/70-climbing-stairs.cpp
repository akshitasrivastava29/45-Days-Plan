class Solution {
    int fun(int ind,vector<int>&dp)
         {
    //     int left=0,right=0;
    //   if(ind==0||ind==1)
    //   {
    //       return 1;
    //   }
    //     if(dp[ind]!=-1)
    //     {
    //         return dp[ind];
    //     }
    //     left=fun(ind-1,dp);
    //     if(ind>1)
    //     {
    //         right=fun(ind-2,dp);
    //     }
    //     return dp[ind]=left+right;
    // }
        // --
    // {
    //     int left=0,right=0;
    //     if(ind==0 || ind==1)
    //     {
    //         return 1;
    //     }
    //     if(dp[ind]!=-1)
    //     {
    //         return dp[ind];
    //     }
    //     left=fun(ind-1,dp);
    //     if(ind>1)
    //     {
    //         right=fun(ind-2,dp);
    //     }
    //     return dp[ind]=left+right;
    // }
        // -------------
        int left=0,right=0;
        if(ind==0 || ind==1)
        {
            return 1;
        }
    if(dp[ind]!=-1)return dp[ind];
        left=fun(ind-1,dp);
        if(ind>1)
        right=fun(ind-2,dp);
    return dp[ind]=left+right;
    }
        
public:
    int climbStairs(int n) {
       // //  vector<int>dp(n+1,-1);
       // // return fun(n,dp);
       //  vector<int>dp(n+1,-1);
       //  return fun(n,dp);
        vector<int>dp(n+1,-1);
        return fun(n,dp);
        
        
    }
};