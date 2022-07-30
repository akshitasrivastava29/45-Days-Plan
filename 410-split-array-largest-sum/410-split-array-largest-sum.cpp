class Solution {
   //  private:
   // bool numsofsubarray(vector<int>&nums,int n,int limit,int m)
   //  {
   //      int cnt=1;
   //     int sum=0;
   //     for(int i=0;i<n;i++)
   //     {
   //         sum+=nums[i];
   //          if(sum>limit)
   //          {
   //              cnt++;
   //              sum=nums[i];
   //          }
   //         if(cnt>limit)
   //         {
   //             return false;
   //         }
   //     }
   //     return  true;
   //  }
   //  public:
   //  int max_element(vector<int>&nums,int n)
   //  {
   //      int max=0;
   //      for(int i=1;i<n+1;i++)
   //      {
   //          if(max<nums[i])
   //          {
   //              max+=nums[i];
   //          }
   //      }
   //      return max;
   //  }
    // private:
    // bool isvalid(vector<int>&nums,int m ,int mx)
    // {
    //     int n=nums.size();
    //     int arr=1;
    //     int sum=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=nums[i];
    //         if(sum>mx)
    //         {
    //             arr++;
    //             sum=nums[i];
    //         }
    //         if(arr>m)
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    private:
    // bool fun(vector<int>&nums,int m,int limit)
    // {
    //     int sumofm=0;
    //     int parts=1;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(nums[i]>limit)
    //         {
    //             return false;
    //         }
    //         if(sumofm+nums[i]>limit)
    //         {
    //             parts++;
    //             sumofm=nums[i];
    //         }
    //         else
    //         {
    //             sumofm+=nums[i];
    //         }
    //     }
    //     if(parts<=m)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
//     bool getsplit(vector<int>&nums,int m,int limit)
//     {
//         int n=nums.size();
        
//         int sumofsub=0;
//         int split=1;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]>limit)
//             {
//                 return false;
//             }
//             if(sumofsub+nums[i]>limit)
//             {
//                 split++;
//                 sumofsub=nums[i];
//             }
//             else
//             {
//                 sumofsub+=nums[i];
//             }
//         }
//         if(split<=m)
//         {
//             return true;
//         }
//         return false;
//     }
    bool getsplit(vector<int>&nums,int m,int k)
    {
        int n=nums.size();
        // /if(n<k)return -1;
        int sumsub=0;
        int split=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>k)
            {
                return false;
            }
            if(sumsub+nums[i]>k)
            {
                split++;
                sumsub=nums[i];
            }
            else
            {
                sumsub+=nums[i];
            }
        }
        if(split<=m)
        {
            return true;
        }
        return false;
        
    }
    
public:
    int splitArray(vector<int>& nums, int m) {
//         int n=nums.size();
//         int low=max_element(nums,n);
//         int high=0;
        
//         for(int i=0;i<n;i++)
//         {
//             high+=nums[i];
//         }
//         int ans=high;
//         while(low<=high)
//         {
//             int mid=low+(high-low)/2;
//             if(numsofsubarray(nums,n,mid,m))
//             {
//                 ans=mid;
//                 high=mid-1;
//             }
//             else
//             {
//                 low=mid+1;
//             }
//         }
//         return ans;
        // ______________----
        // int n=nums.size();
        // int res=-1;
        // int maxele=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     if(maxele<nums[i])
        //     {
        //         maxele=nums[i];
        //     }
        // }
        // int low=maxele;
        // int sumofnums=0;
        // for(int i=0;i<n;i++)
        // {
        //     sumofnums+=nums[i];
        //  }
        // int high=sumofnums;
        // if(n<m)
        //     return -1;
        // while(low<=high)
        // {
        //     int mid=low+(high-low)/2;
        //     if(isvalid(nums,m,mid)==true)
        //     {
        //         res=mid;
        //         high=mid-1;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return res;
        // _-------------------------
        // int n=nums.size();
        // int maxi=0;
        // int sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     maxi=max(maxi,nums[i]);
        //     sum+=nums[i];
        // }
        // int low=maxi;
        // int high=sum;
        // int mid=0;
        // int ans=0;
        // while(low<=high)
        // {
        //     mid=low+(high-low)/2;
        //     if(fun(nums,m,mid)==true)
        //     {
        //         ans=mid;
        //         high=mid-1;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return ans;
        // ________________________
        // int n=nums.size();
        // int sum=0,maxi=INT_MIN;
        // int ans;
        // for(int i=0;i<n;i++)
        // {
        //     maxi=max(maxi,nums[i]);
        //     sum+=nums[i];
        // }
        // int st=maxi,end=sum,mid;
        // while(st<=end)
        // {
        //     mid=st+(end-st)/2;
        //     if(getsplit(nums,m,mid))
        //     {
        //         ans=mid;
        //         end=mid-1;
        //     }
        //     else
        //     {
        //         st=mid+1;
        //     }
        // }
        // return ans;
        // ----------------
        int n=nums.size();
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            sum+=nums[i];
        }
        int low=maxi,high=sum,mid;
        int ans=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(getsplit(nums,m,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};