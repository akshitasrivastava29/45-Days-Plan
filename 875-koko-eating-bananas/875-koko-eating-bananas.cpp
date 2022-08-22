class Solution {
    private:
    int fun(vector<int>&piles,int ph,int h)
    {
        int n=piles.size();
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=piles[i]/ph;
            if(piles[i]%ph!=0)
            {
                cnt+=1;
            }
        }
        return (cnt<=h);
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=piles[0];
        int ans;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,piles[i]);
        }
        int low=1,high=maxi;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(fun(piles,mid,h))
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