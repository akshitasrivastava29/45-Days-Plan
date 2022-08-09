class Solution {
    long long int mod=1e9+7;
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int n=arr.size();
        sort(arr.begin(),arr.end()); 
        vector<long>dp(n);
        dp[0]=1;
        int ans=0;
        for(int k=1;k<n;k++)
        {
            int target=arr[k];
            int i=0,j=k-1;
            long ways=1;
            while(i<=j)
            {
                long prod=(((long)arr[i])* (arr[j]));
                if(prod==target)
                {
                    if(i==j)
                        ways+=(dp[i]*dp[j])%mod;
                    else
                    {
                        ways+=((dp[i]*dp[j])*2)%mod;
                    }
                    i++,j--;
                }
                else if(prod<target)i++;
                else
                {
                    j--;
                }
            }
            dp[k]=ways;
            ans=(int)((ans+dp[k])%mod);
            
        }
        return ans+1;
        
        
    }
};