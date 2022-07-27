class Solution {
//     private:
//      int fun(int ind,int buy, int limit,vector<int>&prices,vector<vector<vector<int>>>&dp)
//      {
//          int n=prices.size();
//          if(ind==n) return 0;
//          if(limit==0)return 0;
//          int profit=0;
//          if(dp[ind][buy][limit]!=-1)
//          {
//             return  dp[ind][buy][limit] ;
//          }
//          if(buy)
//          {
//              profit=max(-prices[ind] +fun(ind+1,0,limit,prices,dp),0+fun(ind+1,1,limit,prices,dp));
//          }
//          else
//          {
//              profit=max(prices[ind]+fun(ind+1,1,limit-1,prices,dp),0+fun(ind+1,0,limit,prices,dp));
//          }
//          return dp[ind][buy][limit]= profit;
         
//      }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       //  vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
       //   int profit=0;
       // return  fun(0,1,2,prices,dp);
         vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
       
//         for(int ind=n-1;ind>=0;ind--)
//         {
//             for(int buy=0;buy<=1;buy++)
//             {
//                 for(int limit=1;limit<=2;limit++)
//                 {
//                     if(buy)
//                     {
//                         dp[ind][buy][limit]=max(-prices[ind]+dp[ind+1][0][limit],0+dp[ind+1][1][limit]);
//                     }
//                     else
//                     {
//                         dp[ind][buy][limit]=max(prices[ind]+dp[ind+1][1][limit-1],0+dp[ind+1][0][limit]);
//                     }
//                 }
//             }
//         }
//         return dp[0][1][2];
        // --------
        // int dp[n][2][3];
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int k=1;k<=2;k++)
                {
                    if(buy)
                    {
                        dp[i][buy][k]=max(-prices[i]+dp[i+1][0][k],0+dp[i+1][1][k]);
                    }
                    else
                    {
                        dp[i][buy][k]=max(prices[i]+dp[i+1][1][k-1],0+dp[i+1][0][k]);
                    }
                }
            }
        }
        return dp[0][1][2];
    }
};