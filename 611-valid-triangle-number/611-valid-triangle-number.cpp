class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        // for(int i=0;i<n-2;i++)
        //     {
        //         for(int j=i+1;j<n-1;j++)
        //         {
        //             for(int k=j+1;k<n;k++)
        //             {
        //                 if(nums[i]+nums[j]>nums[k] && nums[j]+nums[k]>nums[i] && nums[k]+nums[i]>nums[j])
        //                     cnt++;
        //             }
        //         }
        //     }
        // return cnt;
        // ________________________----
//         sort(nums.begin(),nums.end());
//         for(int i=n-1;i>=2;i--)
//         {
//             int j=0,k=i-1;
//             while(j<k)
//             {
//                 if(nums[j]+nums[k]>nums[i])
//                 {
//                     cnt+=k-j;
//                     k--;
//                 }
//                 else
//                 {
//                 j++;
//             }
//             }
            
//         }
//         return cnt;
        // __________________________
        sort(nums.begin(),nums.end());
        // int ans=0;
        // for(int i=n-1;i>=2;i--)
        // {
        //     int low=0,high=i-1;
        //     while(low<high)
        //     {
        //         if(nums[low]+nums[high]>nums[i])
        //         {
        //             ans+=(high-low);
        //             high--;
        //         }
        //         else
        //         {
        //             low++;
        //         }
        //     }
        // }
        // return ans;
        // ________________________--
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=n-1;i>=2;i--)
        {
            int low=0,high=i-1;
            while(low<high)
            {
                if(nums[low]+nums[high]>nums[i])
                {
                    ans+=(high-low);
                    high--;
                }
                else
                {
                    low++;
                }
            }
        }
        return ans;
       
    }
};