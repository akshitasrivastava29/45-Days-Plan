class Solution {
public:
    int jump(vector<int>& nums) {
        // int n=nums.size();
        // int maxreach=0;
        //  int jumps=0;
        // int curr=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     maxreach=max(maxreach ,nums[i]+i);
        //     if(i==curr)
        //     {
        //         curr=maxreach;
        //         jumps++;
        //     }
        // }
        // return jumps;
        // _________-----
        // int n=nums.size();
        // if(n==1)return 0;
        // int maxreach=nums[0];
        // int curr=nums[0];
        // int jumps=1;
        // int i=1;
        // while(maxreach<n-1)
        // {
        //     if(i+nums[i]>curr)
        //     {
        //         curr=i+nums[i];
        //     }
        //     if(i==maxreach)
        //     {
        //         maxreach=curr;
        //         jumps++;
        //     }
        //     i++;
        // }
        // return jumps;
        // ----------------
        int n=nums.size();
        if(n==1)return 0;
        int prev=nums[0];
        int steps=nums[0];
        int jumps=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)return jumps;
        
        if(nums[i]+i>prev)
        {
            prev=nums[i]+i;
        }
        steps--;
        if(steps==0)
        {
            jumps++;
            steps=prev-i;
        }
    }
       return jumps; 
    
    }
};