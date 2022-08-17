class Solution {
    int noways(int ind,int sum,vector<int>&coins,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            return(sum%coins[0]==0);
        }
        if(dp[ind][sum]!=-1)
           {
               return dp[ind][sum]; 
           }
        int nottake=noways(ind-1,sum,coins,dp);
        int take=0;
        if(sum>=coins[ind])
        {
            take=noways(ind,sum-coins[ind],coins,dp);
        }
        return  dp[ind][sum]=take+nottake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return noways(n-1,amount,coins,dp);
        
    }
};