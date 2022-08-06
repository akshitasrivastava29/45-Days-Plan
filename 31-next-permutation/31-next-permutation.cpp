class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//         int n=nums.size(),k,l;
//         for(k=n-2;k>=0;k--)
//         {
//             if(nums[k]<nums[1+k]){
//             break;
//             }
//         }
//         if(k<0)
//         {
//             reverse(nums.begin(),nums.end());
//         }
//         else
//         {
//             for(l=n-1;l>k;l--)
//             {
//                 if(nums[l]>nums[k])
//                 {
//                     break;
//                 }
//             }
        
//             swap(nums[l],nums[k]);
        
//         reverse(nums.begin()+k+1,nums.end());
//         }
        // ___________________-
        // int n=nums.size();
        // int k,l;
        // for( k=n-2;k>=0;k--)
        // {
        //     if(nums[k]<nums[k+1])
        //         break;
        // }
        // if(k<0)
        // {
        //     reverse(nums.begin(),nums.end());
        // }
        // else
        // {
        //     for( l=n-1;l>k;l--)
        //     {
        //         if(nums[l]>nums[k])
        //             break;
        //     }
        //     swap(nums[l],nums[k]);
        //     reverse(nums.begin()+k+1,nums.end());
        // }
        // ________________---
//         int n=nums.size();
//         int i1,i2;
//         for(i1=n-2;i1>=0;i1--)
//         {
//             if(nums[i1]<nums[i1+1])
//             {
//                 break;
//             }
//         }
//         if(i1<0)
//         {
//             reverse(nums.begin(),nums.end());
//         }
//         else
//         {
//             for(i2=n-1;i2>=i1;i2--)
//             {
//                 if(nums[i1]<nums[i2])
//                 {
//                     break;
//                 }
//             }
        
//             swap(nums[i1],nums[i2]);
//         reverse(nums.begin()+i1+1,nums.end());
//         }
        
        // -----------------
        int n=nums.size();
        int i1,i2;
        for( i1=n-2;i1>=0;i1--)
        {
            if(nums[i1]<nums[i1+1])
            {
                break;
            }
        }
        if(i1<0)
        {
            reverse(nums.begin(),nums.end());
        }
        
        else
        {
            for(i2=n-1;i2>=i1;i2--)
            {
                if(nums[i1]<nums[i2])
                {
                    break;
                }
            }
            swap(nums[i1],nums[i2]);
            reverse(nums.begin()+i1+1,nums.end());
        }
    }
    
};