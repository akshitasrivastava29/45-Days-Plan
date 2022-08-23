class Solution {
    bool fun(vector<int>& bloomDay, int day,int m, int k)
    {
        int n=bloomDay.size();
        long res=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=day)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            if(cnt==k)
            {
                res++,cnt=0;
            }
        }
        return (res>=m);
        
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int maxi=bloomDay[0];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,bloomDay[i]);
        }
        int low=1,high=maxi;
        if(m*k>n) return -1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(fun(bloomDay,mid,m,k))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
            
        }
        return high;
        
        
    }
};