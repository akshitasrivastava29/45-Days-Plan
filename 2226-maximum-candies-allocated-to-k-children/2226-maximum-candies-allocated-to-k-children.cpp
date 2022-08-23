class Solution {
    bool fun(vector<int>&candies,long long div,long long k)
    {
        long long split=0;
        for(int i=0;i<candies.size();i++)
        {
            split+=(candies[i]/div);
        }
        return split>=k;
            
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        int maxi=candies[0],ans=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,candies[i]);
        }
        int low=1,high=maxi;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(fun(candies,mid,k))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
        
    }
};