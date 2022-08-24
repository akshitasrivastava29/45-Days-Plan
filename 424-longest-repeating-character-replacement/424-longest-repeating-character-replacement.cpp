class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        unordered_map<char,int>mp;
        int i=0,maxrepeat=0,maxlen=0;
        for(int j=0;j<n;j++)
        {
            mp[s[j]]++;
            maxrepeat=max(maxrepeat,mp[s[j]]);
            if(j-i+1-maxrepeat>k)
            {
                mp[s[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            
        }
        return maxlen;
        
    }
};