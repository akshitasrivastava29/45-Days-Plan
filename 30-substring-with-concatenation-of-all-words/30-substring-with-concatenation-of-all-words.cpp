class Solution {
    bool checksubstring(unordered_map<string,int>mp,string s,int wordlen)
    {
        for(int j=0;j<s.size();j+=wordlen)
        {
            string w=s.substr(j,wordlen);
            if(mp.find(w)!=mp.end())
            {
                if(--mp[w]==-1)
                {
                    return false;
                }
            }
                else
                {
                    return false;
                }
            }
        
        return true;
    }
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=s.length();
        vector<int>res;
        int wordlen=words[0].size();
        int window=wordlen*words.size();
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        int i=0;
        while(i+window<=n)
        {
            if(checksubstring(mp,s.substr(i,window),wordlen))
            {
                res.push_back(i);
            }
            i++;
        }
        return res;
    }
};