class Solution {
    private:
    int getcoins(int ind,int sum,vector<int>&coins,vector<vector<int>>&dp)
    {
        int n=coins.size();
        if(ind==0)
        {
            if(sum%coins[0]==0)
            {
                return sum/coins[0];
            }
            else
            {
               return  1e9;
            }
        }
        if(dp[ind][sum]!=-1)
        {
            return dp[ind][sum];
        }
        int notpick=getcoins(ind-1,sum,coins,dp);
        int pick=INT_MAX;
        if(coins[ind]<=sum)
        pick=1+getcoins(ind,sum-coins[ind],coins,dp);
        return dp[ind][sum]=min(pick,notpick);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=getcoins(n-1,amount,coins,dp);
        if(ans>=1e9)return -1;
        return ans;
        
    }
};