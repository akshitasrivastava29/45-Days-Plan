class Solution {
    int dp[1001];
    int fun(vector<int>&arr,int d,int i)
    {
        int n=arr.size();
        int steps=1;
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        for(int j=i+1;j<=min(i+d,n-1)&& arr[i]>arr[j];j++)
        {
            steps=max(steps,1+fun(arr,d,j));
        }
        for(int j=i-1;j>=max(i-d,0) && arr[i]>arr[j];j--)
        {
            steps=max(steps,1+fun(arr,d,j));
        }
        return dp[i] =steps;
    }
public:
    int maxJumps(vector<int>& arr, int d) {
        memset(dp,-1,sizeof dp);
        int n=arr.size();
        int steps=1;
        for(int i=0;i<n;i++)
        {
            steps=max(steps,fun(arr,d,i));
        }
      return steps;  
    }
};