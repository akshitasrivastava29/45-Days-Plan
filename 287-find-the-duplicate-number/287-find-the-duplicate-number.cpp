class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         int slow=nums[0];
//         int fast=nums[0];
//         do{
//             slow=nums[slow];
//             fast=nums[nums[fast]];
//         }while(slow!=fast);
//         fast=nums[0];
//         while(slow!=fast)
//         {
//             slow=nums[slow];
//             fast=nums[fast];

//         }
//         return slow;
        // ______________________
        // int n=nums.size();
        // int low=1,high=n-1,mid;
        // while(low<high)
        // {
        //     int cnt=0;
        //     mid=low+(high-low)/2;
        //     for(int i=0;i<n;i++)
        //     {
        //         if(nums[i]<=mid)
        //         {
        //             cnt++;
        //         }
        //     }
        //     if(cnt>mid)
        //     {
        //         high=mid;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return low;
        // _____________________

    // int slow=nums[0];
    // int fast=nums[0];
    //    do{
    //     slow=nums[slow];
    //     fast=nums[nums[fast]];
    //    }while(slow!=fast);
    //        fast=nums[0];
    //     while(slow!=fast)
    //     {
    //         slow=nums[slow];
    //         fast=nums[fast];
    //     }
    //     return slow;
    // }
        // __________________________--
        // // *Use Built in sort function* Tc:o(nlogn+n),Sc:o(1)
         int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //         return nums[i];
        // }
        // return -1;
        // __________________________________
//         // *use binary search *TC:0(nlogn),SC:O((1)
//         int low=1,high=n-1,mid;
//         while(low<high)
//         {
//             mid=low+(high-low)/2;
//             int count=0;
//             for(const int&ele:nums)
//             {
//                 if(ele<=mid)
//                 {
//                     count++;
//                 }
//             }
//                 if(count>mid)
//                 {
//                     high=mid;
//                 }
//                 else
//                 {
//                     low=mid+1;
//                 }
            
//         }
//         return low;
        // ______________________________________
        // *Floyds Algo* Tc:O(n),SC:o(1)
        // int slow=nums[0];
        // int fast=nums[0];
        // do{
        //     slow=nums[slow];
        //     fast=nums[nums[fast]];
        // }while(slow!=fast);
        //     fast=nums[0];
        // while(slow!=fast)
        // {
        //     slow=nums[slow];
        //     fast=nums[fast];
        // }
        //  return slow; 
        // ______________--
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int cnt=0;
            for(auto n:nums)
            {
                if(n<=mid)
                {
                   cnt++;
                }
                
            }
            if(cnt<=mid)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
        
    }
        
};