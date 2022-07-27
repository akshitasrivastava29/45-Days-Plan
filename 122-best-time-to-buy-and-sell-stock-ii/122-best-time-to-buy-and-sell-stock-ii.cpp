class Solution {
    // private:
    //  int fun(int ind,int buy,vector<int>&prices,vector<vector<int>>&dp)
    //  {
    //      int n=prices.size();
    //      int profit=0;
    //      if(ind==n)
    //      {
    //          return 0;
    //      }
    //      if(dp[ind][buy]!=-1)
    //      {
    //          return dp[ind][buy];
    //      }
    //      if(buy)
    //      {
    //          profit=max(-prices[ind]+fun(ind+1,0,prices,dp),fun(ind+1,1,prices,dp));
    //      }
    //      else
    //      {
    //          profit=max(prices[ind]+fun(ind+1,1,prices,dp),fun(ind+1,0,prices,dp));
    //      }
    //      return dp[ind][buy]= profit;
    //  }
    private:
     int fun(int i,int buy,vector<int>&prices,vector<vector<int>>&dp)
     {
         int n=prices.size();
         int profit=0;
         if(i==n)
        return 0;
         if(dp[i][buy]!=-1)
         {
             return dp[i][buy];
         }
         if(buy)
         {
             profit=max(-prices[i]+fun(i+1,0,prices,dp),0+fun(i+1,1,prices,dp));
         }
         else
         {
             profit=max(prices[i]+fun(i+1,1,prices,dp),0+fun(i+1,0,prices,dp));
         }
         return dp[i][buy]=profit;
         
     }
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
//         vector<vector<int>>dp(n,vector<int>(2,-1));
       
//         return fun(0,1,prices,dp);
//         vector<vector<int>>dp(n+1,vector<int>(2,0));
//         dp[n][0]=dp[n][1]=0;
//         for(int ind=n-1;ind>=0;ind--)
//         {
//             for(int buy=0;buy<=1;buy++)
//             {
//                 int profit=0;
//                 if(buy)
//                 {
//                     profit=max(-prices[ind]+dp[ind+1][0],dp[ind+1][1]);
//                 }
//                 else
//                 {
//                     profit=max(prices[ind]+dp[ind+1][1],dp[ind+1][0]);
//                 }
//                 dp[ind][buy]=profit;
//             }
//         }
        
//       return dp[0][1]; 
        // -------------
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return fun(0,1,prices,dp);
    }
};