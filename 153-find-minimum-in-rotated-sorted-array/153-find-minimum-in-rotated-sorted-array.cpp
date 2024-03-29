class Solution {
public:
    int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int low=0,high=n-1;
//         while(low<high)
//         {
//             int mid=low+(high-low)/2;
           
               
//             if(nums[mid]<nums[high])
//                {
//                    high=mid;
//                }
//             else
//             {
//                 low=mid+1;
//             }
//         }
        
//         return nums[low];
        
        // int n=nums.size();
        // int low=0,high=n-1,mid;
        // while(low<high)
        // {
        //     mid=low+(high-low)/2;
        //     if(nums[mid]<nums[high])
        //        {
        //            high=mid;
        //        }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return nums[low];
        // -------------
        // int n=nums.size();
        // int low=0,high=n-1,mid;
        // while(low<high)
        // {
        //     mid=low+(high-low)/2;
        //     if(nums[mid]<nums[high])
        //     {
        //         high=mid;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return nums[low];
        // -----
        int n=nums.size();
        int low=0,high=n-1,mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return nums[low];
    }
};