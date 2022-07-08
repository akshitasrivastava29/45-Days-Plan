class Solution {
    int find(vector<long long>&prefix,int k,int ind,int num)
    {
        int ans=0;int low=0,high=ind;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long sum=prefix[ind+1]-prefix[mid];
            long long  operations=1LL*(ind-mid+1)*num-sum;
            if(operations<=(1LL*k))
            {
                ans=max(ans,(ind-mid+1));
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=1;
        map<int,int>mp;
        vector<long long>prefix(n+1,0);
        for(int i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            mp[nums[i]]++;
            int curr=find(prefix,k,i-1,nums[i]);
            ans=max(ans,curr+mp[nums[i]]);
        }
       return ans; 
        
    }
};