class Solution {
    unordered_map<int,vector<int>>mp;
    int MOD=1e9+7;
    private:
    int helper(int n,int i,char prev,vector<vector<long long>>&dp)
    {
        if(i>n)return 0;
        if(i==n)
        {
            switch (prev)
            {
                case 'a':
                    return 1;
                case 'e':
                    return 2;
                case 'i':
                    return 4;
                case 'o':
                    return 2;
                case 'u':
                    return 1;
                default:
                    return 5;
            }
        }
        int idx=prev-'a';
        if(dp[i][idx]!=-1)
        {
            return dp[i][idx];
        }
        long long ans=0;
        for(auto next:mp[prev])
        {
            ans+=(helper(n,i+1,next,dp)%MOD);
        }
        return dp[i][idx]=ans%MOD;
    }
public:
    int countVowelPermutation(int n) {
        mp['c']={'a','e','i','o','u'};
        mp['a']={'e'};
        mp['e']={'a','i'};
        mp['i']={'a','e','o','u'};
        mp['o']={'i','u'};
        mp['u']={'a'};
        vector<vector<long long>>dp(vector<vector<long long>>(n+2,vector<long long>(27,-1)));
        return helper(n,1,'c',dp);
        
    }
};