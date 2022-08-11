class Solution {
    bool maxcount(map<char,int>mp,int k)
    {
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second<k)
            {
                return false;
            }
        }
        return true;
    }
    
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        int ans=0;
        for(int c=1;c<=26;c++)
        {
            map<char,int>mp;
            int i=0,j=0;
            while(i<=j && j<n)
            {
                mp[s[j]]++;
                while(mp.size()>c && i<=j)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    {
                        mp.erase(s[i]);
                        
                    }
                    i++;
                }
                if(maxcount(mp,k))
                {
                    ans=max(ans,j-i+1);
                }
                j++;
            }
            
        }
        return ans;
    }
};