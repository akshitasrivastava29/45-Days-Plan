class Solution {
    private:
    int getnexti(vector<vector<int>>&arr,int i)
    {
        int n=arr.size();
        int low=i+1,high=n-1,ans=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid][0]>=arr[i][1])
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
               low=mid+1;
            }
        }
        return ans;
    }
    private:
    vector<int>dp;
    int fun(vector<vector<int>>&arr,int i)
    {
        int n=arr.size();
        if(i>=n)return 0;
        else if(dp[i]!=-1)
        {
            return dp[i];
        }
        int nottake=fun(arr,i+1);
        int nexti=getnexti(arr,i);
        int take=arr[i][2]+ fun(arr,nexti);
        return dp[i]=max(take,nottake);
    }
    
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
       vector<vector<int>>arr;
        for(int i=0;i<startTime.size();i++)
        {
            int x=startTime[i];
            int y=endTime[i];
            int z=profit[i];
            arr.push_back({x,y,z});
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        dp=vector<int>(n+1,-1);
        return fun(arr,0);
        
        
    }
};