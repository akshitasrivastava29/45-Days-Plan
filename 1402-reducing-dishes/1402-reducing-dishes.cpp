class Solution {
    int solve(vector<int>& satisfaction,int ind,int t,vector<vector<int>>&dp)
    {
        int n=satisfaction.size();
        if(ind==n)return 0;
        if(dp[ind][t]!=-1)
        {
            return dp[ind][t];
        }
        int include=satisfaction[ind]*(t+1) +solve(satisfaction,ind+1,t+1,dp);
        int exclude=0+solve(satisfaction,ind+1,t,dp);
        return dp[ind][t]= max(include,exclude);
    }
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        sort(satisfaction.begin(),satisfaction.end());
        return solve(satisfaction,0,0,dp);
        
    }
};