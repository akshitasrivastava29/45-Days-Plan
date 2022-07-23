class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1,j=n-1,k=m+n-1;
//         while(i>=0 && j>=0)
//         {
//             if(nums1[i]>nums2[j])
//             {
//                 nums1[k]=nums1[i];
//                 i--;
//                 k--;
//             }
//             else
//             {
//                 nums1[k]=nums2[j];
//                 j--;
//                 k--;
//             }
//         }
//         while(i>=0)
                
//         nums1[k--]=nums1[i--];
        
//         while(j>=0)
//         {
//             nums1[k--]=nums2[j--];
//         }
// _________________-----
        // int i=m-1,j=n-1,k=m+n-1;
        // while(i>=0 && j>=0)
        // {
        //     if(nums1[i]>nums2[j])
        //     {
        //         nums1[k]=nums1[i];
        //         i--,k--;
        //     }
        //     else
        //     {
        //         nums1[k]=nums2[j];
        //         j--,k--;
        //     }
        // }
        // while(i>=0)
        // {
        //     nums1[k--]=nums1[i--];
        // }
        // while(j>=0)
        // {
        //     nums1[k--]=nums2[j--];
        // }
        // _________________-
        
//         int gap=ceil((float)(n+m)/2);
//         while(gap>0)
//         {
//             int i=0,j=gap;
//             while(j<(n+m))
//             {
//                 if(j<m && nums[i]>nums[j])
//                 {
//                     swap(nums[i],nums[j]);
//                 }
//                 else if(j>=m && i<m && nums1[i]>nums2[j-m])

//                 {
//                    swap(nums1[i],nums2[j-m]); 
//                 }
//                 else if(j>=m && i>=m && nums2[i-m]>nums2[j-m])
//                 {
//                     swap(nums2[i=m],nums2[j-m]);
//                 }
//                 j++,i++;
//             }
//             if(gap==1)
//             {
//                 gap=0;
//             }
//             else
//             {
//                 gap=ceil((float)gap/2);
//             }
//         }
        // ______________________----
//         int gap=ceil((float)(n+m)/2);
//         while(gap>0)
//         {
//             int i=0,j=gap;
//             while(j<(n+m))
//             {
//                 if(j<m && nums1[i]>nums1[j])
//                 {
//                     swap(nums1[i],nums1[j]);
//                 }
//                 else if(i<m && j>=m && nums1[i]>nums2[j-m])
//                 {
//                      swap(nums1[i],nums2[j-m]);
//                 }
//                 else if(i>=m && j>=m && nums2[i-m]>nums2[j-m] )
//                 {
//                         swap(nums2[i-m],nums2[j-m]);
//                 }
//                 i++,j++;
//             }
//             if(gap==1)
//             {
//                 gap=0;
//             }
            
//             else {
//                     gap=ceil(float(gap)/2);
//                 }
//         }
        // ____________________________
        // int n=nums1.size();
        // int m=nums2.size();
        // int i=m-1,j=n-1,k=m+n-1;
        // while(i>=0 && j>=0)
        // {
        //     if(nums1[i]>nums2[j])
        //     {
        //         nums1[k]=nums1[i];
        //         i--,k--;
        //     }
        //     else
        //     {
        //         nums1[k]=nums2[j];
        //         j--,k--;
        //     }
        // }
        // while(i>=0)
        // {
        //     nums1[k--]=nums1[i--];
        // }
        // while(j>=0)
        // {
        //     nums1[k--]=nums2[j--];
        // }
        // ________________________
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k--]=nums1[i--];
            }
            else
            {
                nums1[k--]=nums2[j--];
            }
        }
        while(i>=0)
        {
            nums1[k--]=nums1[i--];
        }
        while(j>=0)
        {
            nums1[k--]=nums2[j--];
        }
    }
        
        
    
};