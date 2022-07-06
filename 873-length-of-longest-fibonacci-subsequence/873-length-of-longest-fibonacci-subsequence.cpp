class Solution {
    private:
    int getind(unordered_map<int,int>&mp,int key)
    {
        if(mp.find(key)==mp.end())
        {
            return -1;
        }
        else{
            return mp[key];
        }
    }
    
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
//         unordered_set<int>s;
//         for(int i=0;i<n;i++)
//         {
//         s.insert(arr[i]);
//         }
//         int cnt=0;
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 int a=arr[i];
//                 int b=arr[j];
//                 int c=a+b;
//                 cnt=2;
//                 while(s.find(c)!=s.end())
//                 {
//                     cnt++;
//                     a=b;
//                     b=c;
//                     c=a+b;
//                 }
//                 maxi=max(maxi,cnt);
                
//             }
//         }
//         if(maxi>2)
//         {
//             return maxi;
//         }
//         return 0;
        // _______________________--
        
        vector<vector<int>>dp(n,vector<int>(n,-0));
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=i;
        }
        int maxL=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int key=arr[j]-arr[i];
                int ind=getind(mp,key);
                if(ind>-1 && ind<i)
                {
                    dp[i][j]=max(dp[i][j],dp[ind][i]+1);
                    if(maxL<dp[i][j])
                    {
                        maxL=dp[i][j];
                    }
                }
            }
        }
        if(maxL==0)
        {
            return 0;
        }
        return maxL+2;
        
    }
};