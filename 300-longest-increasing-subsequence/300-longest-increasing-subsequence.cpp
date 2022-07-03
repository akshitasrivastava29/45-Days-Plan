class Solution {
//     int fun(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp)
//     {
//         int n=nums.size();
//         if(ind==n)return 0;
//         if(dp[ind][prev+1]!=-1)
//         {
//             return dp[ind][prev+1];
//         }
//         int len=0+fun(ind+1,prev,nums,dp);
        
//         if(prev==-1 || nums[ind]>nums[prev])
        
//             len =max(len,1+fun(ind+1,ind,nums,dp));
        
        
//         return dp[ind][prev+1] =len;
//     }
    int LISfun(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp)
    {
        int n=nums.size();
        if (ind==n)
            return 0;
        if(dp[ind][prev+1]!=-1)
        {
            return dp[ind][prev+1];
        }
        int len=0+LISfun(ind+1,prev,nums,dp);
        if(prev==-1 || nums[ind]>nums[prev])
        {
            len=max(len,1+LISfun(ind+1,ind,nums,dp));
        }
        return dp[ind][prev+1]=len;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        // vector<int>v;
        // if(n==0)
        // {
        //     return 0;
        // }
        // v.push_back(nums[0]);
        // for(int i=1;i<n;i++)
        // {
        //     if(nums[i]>v.back())
        //     {
        //         v.push_back(nums[i]);
        //     }
        //     else
        //     {
        //        int ind=lower_bound(v.begin(),v.end(),nums[i])-v.begin() ;
        //         v[ind]=nums[i];
        //     }
        // }
        // return v.size();
        return LISfun(0,-1,nums,dp);
        
        
    }
};