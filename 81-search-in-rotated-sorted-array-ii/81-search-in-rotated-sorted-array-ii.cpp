class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
         int low=0,high=n-1,mid;
//         while(low<=high)
//         {
//             int mid=low+(high-low)/2;
//             if(nums[mid]==target)
//             {
//                 return true;
//             }
//             if(nums[low]<nums[mid])
//             {
//                 if(nums[low]<=target && target<=nums[mid] )
//                {
//                    high=mid-1;
//                }
//                 else{
//                     low=mid+1;
//                 }
//             }
//                 else if(nums[mid]<nums[low])
//                 {
//                     if(nums[mid]<=target && nums[high]>=target)

//                     {
//                         low=mid+1;
//                     }
//                     else 
//                     {
//                         high=mid-1;
//                     }
//                 }
//             else 
//             {
//                 low++;
//             }
            
                
            
//         }
//         return false;
        
        
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(nums[mid]==target)
//             {
//                 return true;
//             }
//             if(nums[mid]>nums[low])
//                {
//                     if(nums[mid]>=target && nums[low]<=target)
//                        {
//                            high=mid-1;
//                        }
//                         else
//                         {
//                             low=mid+1;
//                         }
//                }
//             else if(nums[mid]<nums[low])
//             {
//                 if(nums[mid]<=target && nums[high]>=target)
//                 {
//                     low=mid+1;
//                 }
//                 else
//                 {
//                     high=mid-1;
//                 }
//             }
//             else
//             {
//             low++;
//             }
            
//         }
//         return false;
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return true;
            }
             if(nums[mid]>nums[low])
            {
                if(nums[mid]>=target && nums[low]<=target)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
           else  if(nums[mid]<nums[low])
            {
                if(nums[mid]<=target && target<=nums[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            else
            {
                low++;
            }
        }
        return false;
        
    }
};