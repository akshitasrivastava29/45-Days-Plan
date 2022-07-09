class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        int n=nums.size();
        long long count=0;
        long long mod=1e9+7;
        vector<long long int>prefix(n,nums[0]);
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int left=-1,right=-1;
            int low=i+1,high=n-2;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(prefix[mid]-prefix[i]<=prefix.back()-prefix[mid])
                {
                    right=mid;
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            low=i+1,high=n-2;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(prefix[mid]-prefix[i]>=prefix[i])
                {
                    left=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(left==-1|| right==-1||left>right)
            {
                continue;
            }
            count=(count+(right-left+1)%mod)%mod;
        }
        return count;
    }
};