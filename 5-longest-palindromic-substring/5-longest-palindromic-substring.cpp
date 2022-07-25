class Solution {
//     string LCS(string s,string s2)
//     {
//         int n=s.length();
//         int m=s2.length();
//         int max=0;
//         // vector<vector<int>>ans;
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
//         for(int i=0;i<=n;i++)
//             dp[i][0]=0;
//         for(int j=0;j<=m;j++)
//             dp[0][j]=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(s1[i-1]==s2[j-1])
//                 {
//                     dp[i][j]=1+dp[i-1][j-1];
                    
//                 }
//                 else if(dp[i][j]>max)
//                 {
//                     sring temp=s1
//                 }
                
//                 }
//             }
//         }
    
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=m;j++ )
//                 {
                    
//                 }
//         }
//         string ans = "";
//         for(int i = start; i <= end; i++)
//             ans += s[i];
        
//         return ans;
    
    
    
    
    
    
    
//         public:
//     string longest_common_substring(string str1, string str2) 
//     {  int s1 = str1.size(); int s2 = str2.size();
//         int dp[s1+1][s2+1];
//         string res ; int max = 0 ;

//         for(int i=0; i<=s1; i++)
//         {
//             for(int j=0; j<=s2; j++)
//             {   if(i==0 || j==0){ dp[i][j] = 0;}
             
//                 else if(str1[i-1] == str2[j-1])
//                 {
//                     dp[i][j] = 1 + dp[i-1][j-1];
                    
//                     if(dp[i][j]>max)
//                     {
//                         string temp = str1.substr(i-dp[i][j], dp[i][j]) ;
                        
//                         string revtemp = string(temp.rbegin(),temp.rend());
//                         if(revtemp==temp)
//                         {
//                             max = dp[i][j] ;
//                             res = temp ;
//                         }
//                     }
//                 }
//                 else
//                 { dp[i][j] = 0 ; }
//             }
//         }

//         return res;
//     string LCSubstr(string s,string s2)
//     {
//         int n=s.length();
//         int m=s2.length();
//         int dp[n+1][m+1];
//         string res;
//         int ans=0;
//         for(int i=0;i<=n;i++)
//             dp[i][0]=0;
//         for(int j=0;j<=m;j++)
//             dp[0][j]=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(s[i-1]==s2[j-1])
//                 {
//                     dp[i][j]=1+dp[i-1][j-1];
//                     // ans=max(ans,dp[i][j]);
//                     if(dp[i][j]>ans)
//                     {
//                         string temp=s.substr(i-dp[i][j],dp[i][j]);
//                         string revtemp=string(temp.rbegin(),temp.rend());
//                         if(revtemp==temp)
//                         {
//                             ans=dp[i][j];
//                             res=temp;
//                         }
//                     }
//                 }
//                 else
//                 {
//                     dp[i][j]=0;
//                 }
//             }
//         }
        
//         return res;
    
        
              
//     }
    string LCstr(string s,string rs)
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
                        string revtemp=string(temp.rbegin(),temp.rend());
                        if(temp==revtemp)
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
        // int n=s.length();
        // string s2=s;
        // reverse(s2.begin(),s2.end());
        // int m=s2.length();
        // return LCSubstr(s,s2);
        
        string rs=s;
        reverse(rs.begin(),rs.end());
        return LCstr(s,rs);
        
        
        
        // string srev = string(s.rbegin(),s.rend());
        // return longest_common_substring(s, srev); 
        
        
    }
};