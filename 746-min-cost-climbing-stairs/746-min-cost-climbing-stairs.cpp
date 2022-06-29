class Solution {
    // int fun(int ind,vector<int>& cost,vector<int>&dp)
    // {
    //     int n=cost.size();
    //     if(ind<2)return cost[ind];
    //     if(dp[ind]!=-1)
    //     {
    //         return dp[ind];
    //     }
    //     return dp[ind]= cost[ind]+min(fun(ind-1,cost,dp),fun(ind-2,cost,dp));
    // }
    private:
//     int getcost(int ind,vector<int>&cost,vector<int>&dp)
//     {
//         int n=cost.size();
//         if(ind<2)return cost[ind];
//         if(dp[ind]!=-1)
//         {
//             return dp[ind];
//         }
//         int left,right;
        
//         return dp[ind]= cost[ind]+min(getcost(ind-1,cost,dp),getcost(ind-2,cost,dp));
        
//     }
    int getmincost(int ind,vector<int>&cost,vector<int>&dp)
    {
        int n=cost.size();
        if(ind<2)return cost[ind];
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        return dp[ind]= cost[ind]+min(getmincost(ind-1,cost,dp),getmincost(ind-2,cost,dp));
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
       //  vector<int>dp(n+1,-1);
       //  return min(fun(n-1,cost,dp),fun(n-2,cost,dp));
        
        
        
        // vector<int>dp(n+1,-1);
        // return min(getcost(n-1,cost,dp),getcost(n-2,cost,dp));
        
        vector<int>dp(n+1,-1);
        return min(getmincost(n-1,cost,dp),getmincost(n-2,cost,dp));
        
        
    }
};