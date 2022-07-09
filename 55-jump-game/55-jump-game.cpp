class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int n=nums.size();
        // int maxreach=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]+i>maxreach)
        //     {
        //         maxreach=nums[i]+i;
        //      }
        //     if(maxreach==i)
        //         break;
        // }
        // return maxreach>=nums.size()-1;
        // --------------
//         int reachable=0;
//         for(int i=0;i<n;i++)
//         {
//             if(reachable<i)return false;
//             else
//                 reachable=max(reachable,i+nums[i]);
                
//         }
//         return true;
        // -----------------
        int n=nums.size();
        int last=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=last)
            {
                last=i;
            }
        }
        if(last==0)
        {
            return true;
        }
        return false;
        
    }
};