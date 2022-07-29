class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       // int n=nums.size();
       //  if(n==1)return 0;
       //  int low=0,high=n-1,mid;
       //  while(low<=high){
       //      mid=low+(high-low)/2;
       //      if(mid>0 && mid<n-1)
       //      {
       //          if(nums[mid-1]<nums[mid] && nums[mid]> nums[mid+1])
       //          {
       //              return mid;
       //          }
       //          else if(nums[mid]<nums[mid-1])
       //          {
       //             high=mid-1;
       //          }
       //          else
       //          {
       //              low=mid+1;
       //          }
       //      }
       //      else if(mid==0)
       //      {
       //          if(nums[mid]>nums[mid+1])
       //              return mid;
       //          else
       //              return mid+1;
       //      }
       //      else if(mid==n-1)
       //      {
       //          if(nums[mid]<nums[mid-1])
       //          {
       //              return mid-1;
       //          }
       //          else
       //          {
       //              return mid;
       //          }
       //      }
       //  }
       //  return -1;
        // _______________________________
//         int n=nums.size();
//         int low=0,high=n-1,mid;
//         while(low<high)
//         {
//             mid=low+(high-low)/2;
//             if(nums[mid]>nums[mid+1])
//             {
//                 high=mid;
//             }
//             else
//             {
//                 low=mid+1;
//             }
                
//         }
//         return low;
        // ________________________________
        // int n=nums.size();
        // if(n==0)return 0;
        // int low=0,high=n-1,mid;
        // while(low<high)
        // {
        //     mid=low+(high-low)/2;
        //     if(nums[mid]>nums[mid+1])
        //     {
        //         high=mid;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return low;
        // -----------------------------
        // int n=nums.size();
        // if(n==0)return 0;
        // int low=0,high=n-1,mid;
        // while(low<high)
        // {
        //     mid=low+(high-low)/2;
        //     if(nums[mid]>nums[mid+1])
        //     {
        //         high=mid;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return low;
        // ---------------------
        int n=nums.size();
        int low=0,high=n-1,mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]<nums[mid+1])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low;
    }
};