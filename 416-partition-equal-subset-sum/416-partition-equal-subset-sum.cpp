class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++)
        {
            totsum+=nums[i];
        }
        int halfsum=totsum/2;
        if(totsum%2)return false;
        bool dp[halfsum+1];
        memset(dp,false,sizeof dp);
        dp[0]=true;
        for(int num:nums)
        {
            for(int j=halfsum;j>=num;j--)
            {
                dp[j]=dp[j]||dp[j-num];
            }
        }
        return dp[halfsum];
        
    }
};