class Solution {
    // private:
    // bool fun(vector<int>prefix,int n,int len,int target)
    // {
    //     int l=0,r=len+l;
    //     while(l<=r)
    //     {
    //         if(prefix[r]-prefix[l]>=target)
    //         {
    //             return true;
    //         }
    //         r++,l--;
    //     }
    //     return false;
    // }
    // ___________________----
//     bool fun(int nums[],int n,int target,int k)
//     {
//         int sum=0;
//         for(int i=0;i<k;i++)
//         {
//             sum+=nums[i];
//         }
//             int maxi=sum;
//             int l=0,r=k-1;
//             while(r!=n-1)
//             {
//                 sum-=nums[l];
//                 l++;
//                 sum+=nums[r];
//                 r++;
//                 maxi=max(maxi,sum);
//             }
//             if(maxi>=target){
//            return true;
//             }
//         return false;
        
        
//     }
public:
    int minSubArrayLen(int target, vector<int>& nums) {
          int n=nums.size();
        // // int n=nums.size();
        // int i=0,j=0,sum=0;
        // int res=INT_MAX;
        // while(j<n)
        // {
        //     sum+=nums[j];
        //     if(sum<target)
        //     {
        //         j++;
            // }
//             else
//             {
//                 while(sum>=target){
//                 res=min(res,j-i+1);
//                 sum=sum-nums[i];
//                 i++;
//              }
//                 j++;
//             }
            
//         }
//         if(res==INT_MAX)
//         {
//             return 0;
//         }
//         else
//             return res;
        // ____________--
        int i=0,j=0,sum=0;
        int res=INT_MAX;
        while(j<n)
        {
            sum+=nums[j];
            if(sum<target)
            {
                j++;
            }
            else
            {
                while(sum>=target)
                {
                    res=min(res,j-i+1);
                    sum=sum-nums[i];
                    i++;
                }
                j++;
            }
        }
        if(res==INT_MAX)
        {
            return 0;
        }
        return res;
        // ________________________________---
        // int n=nums.size();
        // int l=1,r=n;
        // vector<int>prefix(n+1,0);
        // prefix[1]=nums[0];
        // for(int i=0;i<n;i++)
        // {
        //     prefix[i+1]=prefix[i]+nums[i];
        // }
        // if(prefix[n]<target)
        // {
        //     return 0;
        // }
        //   while(l<r)
        //   {
        //       int mid=l+(r-l)/2;
        //       if(fun(prefix,n,mid,target))
        //          {
        //             r=mid;
        //          }
        //          else
        //          {
        //              l=mid+1;
        //          }
        //   }
        //    return r;
        // ______________________---
//          int low=0,high=n+1,mid;
//         bool ans=false;
//         while(low<high)
//         {
//             mid=low+(high-low)/2;
//             if(fun(nums,n,target,mid)==true)
//             {
//                 ans=true;
//                 high=mid;
//             }
//             else
//             {
//                 low=mid+1;
//             }
//         }
//         if(ans==true){
//             return low;
//         }
//         return 0;
        
        
    }
};