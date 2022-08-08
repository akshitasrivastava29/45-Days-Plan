class Solution {
    private:
    string LCSubs(string s ,string rs)
    {
        int n=s.length();
        int m=rs.length();
        string res="";
        int ans=0;
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int j=0;j<=m;j++)
            dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==rs[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    if(dp[i][j]>ans)
                    {
                        string temp=s.substr(i-dp[i][j],dp[i][j]);
                        string rtemp=string(temp.rbegin(),temp.rend());
                        if(temp==rtemp)
                        {
                            ans=dp[i][j];
                            res=temp;
                        }
                    }
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return res;
        
    }
public:
    string longestPalindrome(string s) {
        int n=s.length();
        string rs=s;
        reverse(rs.begin(),rs.end());
         return LCSubs(s,rs);
    
        
    }
};