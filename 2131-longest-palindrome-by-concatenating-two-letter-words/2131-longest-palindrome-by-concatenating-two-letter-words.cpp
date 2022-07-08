class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        long long ans=0;
        for(string s:words)
        {
            string revs=s;
           reverse(revs.begin(),revs.end());
            if(mp.find(revs)!=mp.end())
            {
                ans+=4;
                mp[revs]--;
                if(mp[revs]==0)
                {
                    mp.erase(revs);
                }
                
            }
            else
            {
                mp[s]++;
            }
        }
        for(auto x:mp)
        {
            if(x.first[0]==x.first[1])
            {
                ans+=2;
                break;
            }
        }
        return ans;
        
    }
};