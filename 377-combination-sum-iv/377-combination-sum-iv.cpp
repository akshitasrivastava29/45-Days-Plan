class Solution {
    int dp[10001]={0};
    int cnt=0;
    int solve(vector<int>&nums,int target)
    {
        if(target<0)return 0;
        if(target==0)
        {
            cnt++;
            return 1;
        }
        if(dp[target]!=-1)
        {
            return dp[target];
        }
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp+=solve(nums,target-nums[i]);
        }
       return dp[target]=temp; 
    }
    
    
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(nums,target);
        
        
        
    }
};