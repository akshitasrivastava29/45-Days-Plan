class Solution {
    // int LIS(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp)
    // {
    //     int n=nums.size();
    //     if(ind==n)return 0;
    //     if(dp[ind][prev+1]!=-1)
    //     {
    //         return dp[ind][prev+1];
    //     }
    //     int len=0+LIS(ind+1,prev,nums,dp);
    //     if(prev==-1 || nums[ind]>nums[prev])
    //     {
    //         len=max(len,1+LIS(ind+1,ind,nums,dp));
    //     }
    //     return dp[ind][prev+1]=len;
    // }
    // --------------------
    // int LIS(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp)
    // {
    //     itn n=nums.size();
    //     if(ind==n)return 0;
    //     if(dp[ind][prev+1]!=-1)
    //     {
    //         return dp[ind][prev+1];
    //     }
    //     int len=0+LIS(ind+1,prev,nums,dp);
    //     if((prev==-1) || nums[ind]>nums[prev])
    //     {
    //         len=max(len,1+fun(ind+1,ind,nums,dp));
    //     }
    //     return dp[ind][prev+1]=len;
    // }
public:
    int lengthOfLIS(vector<int>& nums) {
        // int n=nums.size();
        // vector<vector<int>>dp(n,vector<int>(n+1,-1));
        // return LIS(0,-1,nums,dp);
        // ----------------
        
        int n=nums.size();
        vector<int>temp;
        temp.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            if(nums[i]>temp.back())
            {
                temp.push_back(nums[i]);
            }
            else
            {
                int ind=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }
        }
        
        return temp.size();
        
    }
};