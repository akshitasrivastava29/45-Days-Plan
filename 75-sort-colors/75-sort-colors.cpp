class Solution {
    // private:
    // void swap(int &a ,int &b)
    // {
    //     int temp=a;
    //      a=b;
    //      b=temp;
    // }
    
public:
    void sortColors(vector<int>& nums) {
        // int n=nums.size();
        // int low=0,mid=0,high=n-1;
        // while(mid<=high) {
        //   // if(nums[mid]==0)
        //   // {
        //   //    swap(nums[mid],nums[low]);
        //   //    low++,mid++;
        //   // }
        //   //   if(nums[mid]==1)
        //   //   {
        //   //       mid++;
        //   //   }
        //   //   if(nums[mid]==2)
        //   //   {
        //   //       swap(nums[mid],nums[high]);
        //   //          high--;
        //   //   }
        //     switch (nums[mid])
        //     {
        //         case 0:
        //            swap(nums[mid++],nums[low++]);
        //                break;
        //         case 1:
        //             mid++;
        //             break;
        //         case 2:
        //             swap(nums[mid],nums[high--]);
        //                 break;
        //     }
        // }
        // ________________________________-----
//         int n=nums.size();
//         int low=0,high=n-1,mid=0;
//         while(mid<=high)
//         {
//             if(nums[mid]==0)
//             {
//                 swap(nums[mid],nums[low]);
//                 mid++,low++;
//             }
//             else if(nums[mid]==1)
//             {
//                 mid++;
//             }
//             else
//             {
//                 swap(nums[mid],nums[high]);
//                 high--;
                     
//             }
        
        // }
        // _________________
        // int n=nums.size();
        // int low=0,mid=0,high=n-1;
        // while(mid<=high)
        // {
        //     if(nums[mid]==0)
        //     {
        //         swap(nums[mid],nums[low]);
        //         mid++,low++;
        //     }
        //     else if(nums[mid]==1)
        //     {
        //         mid++;
        //     }
        //     else {
        //         swap(nums[mid],nums[high]);
        //         high--;
        //     }
        // }
        // ---------------------
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++,low++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
                
        }

    }
};