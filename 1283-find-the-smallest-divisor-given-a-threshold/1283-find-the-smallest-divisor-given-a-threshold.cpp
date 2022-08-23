class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
       int low=1,high=1e9;
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
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
             low=mid+1;
            }
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
        
        
    }
};