class Solution {
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int n=nums.size();
        // vector<int>ans;
        // int low=0,high=n-1,mid,res=-1;
        // while(low<=high)
        // {
        //     int mid=low+(high-low)/2;
        //     if(nums[mid]==target)
        //     {
        //         res=mid;
        //         high=mid-1;
        //     }
        //     else if(nums[mid]>target)
        //     {
        //         high=mid-1;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // ans.push_back(res);
        // low=0,high=n-1,mid,res=-1;
        // while(low<=high)
        // {
        //     mid=low+(high-low)/2;
        //     if(nums[mid]==target)
        //     {
        //         res=mid;
        //         low=mid+1;
        //     }
        //     if(nums[mid]>target)
        //     {
        //          high=mid-1;
        //     }
        //     else {
        //         low=mid+1;
        //     }
        // }
        // ans.push_back(res);
        // return ans;
        // _______________________
//         int n=nums.size();
//         vector<int>ans;
//         int low=0,high=n-1,mid,res=-1;
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(nums[mid]==target)
//             {
//                 res=mid;
//                 high=mid-1;
//             }
//             else if(nums[mid]>target)
//             {
//                 high=mid-1;
//             }
//             else 
//             {
//                 low=mid+1;
//             }
                
//         }
//         ans.push_back(res);
//         low=0,high=n-1,mid,res=-1;
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(nums[mid]==target)
//             {
//                 res=mid;
//                 low=mid+1;
//             }
//             else if(nums[mid]<target)
//             {
//                 low=mid+1;
//             }
//             else 
//             {
//                 high=mid-1;
//             }
//         }
//         ans.push_back(res);
//         return ans;
        // --------------------
        int n=nums.size();
        vector<int>ans;
        int low=0,high=n-1,mid,res=-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                res=mid;
                high=mid-1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        ans.push_back(res);
        low=0,high=n-1,mid,res=-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                res=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        ans.push_back(res);
        return ans;
        
        
    }
};