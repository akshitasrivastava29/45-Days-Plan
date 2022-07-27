class Solution {
    private:
    // int fun(int ind,int buy,vector<int>&prices,vector<vector<int>>&dp)
    // {
    //     int n=prices.size();
    //     int profit=0;
    //     if(ind>=n)
    //     {
    //         return 0;
    //     }
    //     if(dp[ind][buy]!=-1)
    //     {
    //         return dp[ind][buy];
    //     }
    //     if(buy)
    //        {
    //           profit=max(-prices[ind]+fun(ind+1,0,prices,dp),0+fun(ind+1,1,prices,dp)); 
    //        }
    //     else
    //     {
    //         profit=max(prices[ind]+fun(ind+2,1,prices,dp),0+fun(ind+1,0,prices,dp));
    //     }
    //     return  dp[ind][buy]=  profit;
    // }
    int fun(int i,int buy,vector<int>&prices,vector<vector<int>>&dp)
    {
        int n=prices.size();
        int profit=0;
        if(i>=n)
        {
            return 0;
        }
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        if(buy)
        {
            profit=max(-prices[i]+fun(i+1,0,prices,dp),fun(i+1,1,prices,dp));
        }
        else
        {
            profit=max(prices[i]+fun(i+2,1,prices,dp),fun(i+1,0,prices,dp));
        }
        return dp[i][buy]=profit;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return fun(0,1,prices,dp);
        
        
    }
};