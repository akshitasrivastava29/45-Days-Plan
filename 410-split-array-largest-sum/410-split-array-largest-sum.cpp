class Solution {
    bool divposs(vector<int>&nums,int m,int div)
    {
        int subarr=1;
        int  sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>div) return false;
            sum+=nums[i];
            if(sum>div)
            {
                subarr+=1;
                sum=nums[i];
            }
        }
        return (subarr<=m);
    }
public:
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int mini=INT_MAX,sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,nums[i]);
            sum+=nums[i];
        }
        int low=mini,high=sum;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(divposs(nums,m,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
        
    }
};






    