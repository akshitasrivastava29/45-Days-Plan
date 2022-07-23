class Solution {
//     int fun(int i,vector<int>&nums,vector<int>&t)
//     {
       
//         if(i>=nums.size())
//         {
//             return 0;
//         }
//         if(t[i]!=-1)
//            return t[i];
//         int steal=nums[i]+fun(i+2,nums,t);
//         int notsteal=fun(i+1,nums,t);
//         return t[i]= max(steal,notsteal);
//     }
    private:
    // int getmax(int ind,vector<int>&nums,vector<int>&dp)
    // {
    //     if(ind==0)return nums[ind];
    //     if(ind<0)return 0;
    //     if(dp[ind]!=-1)
    //     {
    //         return dp[ind];
    //     }
    //     int steal=nums[ind]+getmax(ind-2,nums,dp);
    //     int notsteal=0+getmax(ind-1,nums,dp);
    //     return  dp[ind]=max(steal,notsteal);
    // }
    // ---------
    // int getmax(int ind,vector<int>&nums,vector<int>&dp)
    // {
    //     if(ind==0)return nums[ind];
    //     if(ind<0)return 0;
    //     if(dp[ind]!=-1)
    //     {
    //         return dp[ind];
    //     }
    //     int pick=nums[ind]+getmax(ind-2,nums,dp);
    //     int notpick=getmax(ind-1,nums,dp);
    //     return dp[ind]=max(pick,notpick);
    // }
public:
    int rob(vector<int>& nums) {
        // int n=nums.size();
//         // vector<int>t(n,-1);
//         vector<int>t(n+2,0);
//         // return fun(0,nums,t);
        
//               t[n]=0;
//               t[n+1]=0;
//           for(int i=n-1;i>=0;i--)
//           {
          
            
//             t[i]=nums[i]+t[i+2];
//             t[i]=max(t[i],t[i+1]);
//           }
        
//       return t[0]; 
        
        
        // vector<int>temp1,temp2;
        // vector<int>dp(n,-1);
        // // int n=nums.size();
        // if(n==1)return nums[0];
        // for(int i=0;i<n;i++)
        // {
        //     if(i!=0)temp1.push_back(nums[i]);
        //     if(i!=n-1)temp2.push_back(nums[i]);
        // }
        // return max(getmax(n-1,temp1,dp),getmax(n-1,temp2,dp));
        
        // int n=nums.size();
        // vector<int>dp(n,-1);
        // vector<int>t1,t2;
        // if(n==1)return  nums[0];
        // for(int i=0;i<n;i++)
        // {
        //     if(i!=0)t1.push_back(nums[i]);
        //     if(i!=n-1)t2.push_back(nums[i]);
        // }
        // return max(getmax(n-1,t1,dp),getmax(n-1,t2,dp));
        // -----
        int n=nums.size();
        vector<int>dp(n+2,0);
        dp[n]=0;
        dp[n+1]=0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i]=nums[i]+dp[i+2];
            dp[i]=max(dp[i],dp[i+1]);
        }
        return dp[0];
       
    }
};