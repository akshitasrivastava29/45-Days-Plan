class Solution {
    
    // int sumafterdiv(vector<int>&nums,int n,int div)
    // {
    //     int sum=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=(nums[i]/div);
    //         if(nums[i]/div!=0)
    //         {
    //             sum+=1;
    //         }
    //     }
    //  return sum;
    // }
    
    
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
//         int n=nums.size();
//         int low=1;
//         int max=0;
//          for(int i=0;i<n;i++)
//          {
//             if(max<nums[i])
//                 max=nums[i];
//          }
//         int high=max;
       
//         int ans=high;
//         while(low<high)
//         {
//             int mid=low+(high-low)/2;
//             if(sumafterdiv(nums,n,mid)<=threshold)
//             {
//                     ans=mid;
//                     high=mid-1;
//             }
//             else
//             {
//                 low=mid+1;
//             }
//         }
//         return ans;
        // int l=1,r=1000001;
        // int ans=0;
        // while(l<=r)
        // {
        //     int mid=l+(r-l)/2;
        //     long long int sum=0;
        //     for(int i=0;i<nums.size();i++)
        //     {
        //         if(nums[i]%mid==0)
        //         {
        //             sum+=(nums[i]/mid);
        //         }
        //         else
        //         {
        //             sum+=(nums[i]/mid)+1;
        //         }
        //     }
        //     if(sum>threshold)
        //     {
        //         l=mid+1;
        //     }
        //     else
        //     {
        //         ans=mid;
        //         r=mid-1;
        //     }
        // }
        // return ans;
        int l=1,r=1000001;
        int n=nums.size();
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            long long int sum=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]%mid==0)
                {
                    sum+=(nums[i]/mid);
                }
                else
                {
                    sum+=(nums[i]/mid)+1;
                }
            }
            
            if(sum>threshold)
            {
                l=mid+1;
            }
            else
            {
                ans=mid;
                r=mid-1;
            }
        }
        return ans;
    }
};