class Solution {
    private:
    int fun(int ind,int buy,int k,vector<int>&prices,vector<vector<vector<int>>>&dp)
    {
        int n=prices.size();
        int profit=0;
        if(ind==n)return 0;
        if(k==0) return 0;
        if(dp[ind][buy][k]!=-1)
        {
            return dp[ind][buy][k];
        }
        if(buy)
        {
            profit=max(-prices[ind]+fun(ind+1,0,k,prices,dp),fun(ind+1,1,k,prices,dp));
        }
        else
        {
            profit=max(prices[ind]+fun(ind+1,1,k-1,prices,dp),fun(ind+1,0,k,prices,dp));
        }
        return dp[ind][buy][k]=profit;
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return fun(0,1,k,prices,dp);
        
    }
};