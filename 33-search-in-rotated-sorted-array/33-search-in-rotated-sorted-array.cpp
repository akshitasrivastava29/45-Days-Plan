class Solution {
public:
    int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         int low=0;
//         int high=n-1;
//         while(low<=high)
//         {
//             int mid=low+(high-low)/2;
//             if(nums[mid]==target)
//             {
//                 return mid;
//             }
//             if(nums[low]<=nums [mid])
//             {
//                 if(target>=nums[low]&&target<=nums[mid])
//                 {
//                     high=mid-1;
//                 }
//                 else
//             {
//                 low=mid+1;
//             }
//             }
//             else
//             {
//                 if(nums[mid]<=target&&nums[high]>=target)
//                 {
//                     low=mid+1;
//                 }
//                 else
//                 {
//                     high=mid-1;
//                 }
//             }
            
           
            
          
//         }
//          return -1; 
//         return low;
        
        
//         int n=nums.size();
//          int low=0,high=n-1,mid;
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(nums[mid]==target)
//             {
//                 return mid;
//             }
//             else if(nums[low]<=nums[mid])
//             {
//                 if(target>=nums[low] && target<=nums[mid])
//                 {
//                     high=mid-1;
//                 }
//                 else{
//                     low=mid+1;
//                 }
//             }
//             else
//             {
//                 if(target>=nums[mid] && target<=nums[high])
//                 {
//                     low=mid+1;
//                 }
//                 else
//                 {
//                     high=mid-1;
//                 }
//             }
//         }
//         return -1;
//          return low;
        
        int n=nums.size();
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                
                return mid;
            }
            else if(nums[low]<=nums[mid])
            {
                if(target<=nums[mid] && target>=nums[low])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(nums[mid]<=nums[high])
            {
                if(target>=nums[mid] && target<=nums[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;
        return low;
        
        
    }
};