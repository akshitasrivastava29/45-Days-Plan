class Solution {
public:
    int findMin(vector<int>&nums) {
//         int n=arr.size();
//         int low=0;
//         int high=n-1;
//         while(low<=high)
//         {
//             int mid=low+(high-low)/2;
//             if(arr[mid]<arr[high])
//             {
//                 high=mid;
//             }
//             else if(arr[mid]>arr[high])
//             {
//                 low=mid+1;
//             }
//             else
//             {
//                 high--;
//             }
                
//         }
//         return arr[low];
        
        
//         int n=arr.size();
//         int low=0,high=n-1,mid;
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(arr[mid]<arr[high])
//             {
//                 high=mid;
//             }
//             else if (arr[mid]>arr[high])
//             {
//                 low=mid+1;
//             }
//             else     //if same so reduce high by 1
//             {
//                 high--;
//             }
            
//         }
//         return arr[low];
        
        // int n=nums.size();
        // int low=0,high=n-1,mid;
        // while(low<=high)
        // {
        //     mid=low+(high-low)/2;
        //     if(nums[mid]>nums[high])
        //     {
        //         low=mid+1;
        //     }
        //     else if(nums[mid]<nums[high])
        //     {
        //         high=mid;
        //     }
        //     else
        //     {
        //         high--;
        //     }
        // }
        // return nums[low];
        // --------------
        int n=nums.size();
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]<nums[high])
            {
                high=mid;
            }
            else if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else
            {
                high--;
            }
        }
        return nums[low];
    }
};