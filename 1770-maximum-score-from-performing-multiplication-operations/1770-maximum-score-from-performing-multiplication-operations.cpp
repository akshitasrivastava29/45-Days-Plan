class Solution {
    int fun(int ind,int l,int r,vector<int>&nums,vector<int>&multipliers,vector<vector<int>>&dp)
    {
        int n=nums.size();
        int m=multipliers.size();
        if(ind==m) return 0;
        if(dp[ind][l]!=INT_MIN)
        {
            return dp[ind][l];
        }
        int left=multipliers[ind]*nums[l]+fun(ind+1,l+1,r,nums,multipliers,dp);
        int right=multipliers[ind]*nums[r]+fun(ind+1,l,r-1,nums,multipliers,dp);
       return dp[ind][l]= max(left,right); 
    }
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,INT_MIN));
        return fun(0,0,n-1,nums,multipliers,dp);
        
        
    }
};