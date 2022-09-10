class Solution {
    int fun(int ind,int buy,vector<int>&prices,int fee,vector<vector<int>>&dp)
    {
        int n=prices.size();
        if(ind==n)return 0;
        
        int profit=0;
        if(dp[ind][buy]!=-1)
        {
            return dp[ind][buy];
        }
        if(buy)
        {
            profit=max(-prices[ind]+fun(ind+1,0,prices,fee,dp),0+fun(ind+1,1,prices,fee,dp));
        }
        else
        {
            profit=max(prices[ind]-fee+fun(ind+1,1,prices,fee,dp),0+fun(ind+1,0,prices,fee,dp));
        }
        return dp[ind][buy]=profit;
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return fun(0,1,prices,fee,dp);
        
        
    }
};