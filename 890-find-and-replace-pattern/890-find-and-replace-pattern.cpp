class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            string a=words[i];
            string b=pattern;
            int flag=0;
            map<char,int>mp;
            map<char,int>key;
            for(int j=0;j<pattern.size();j++)
            {
                if(mp.find(a[j])!=mp.end())
                {
                    if(mp[a[j]]==b[j])
                    {
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(key[b[j]]==1)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        mp[a[j]]=b[j];
                        key[b[j]]=1;
                    }
                }
            }
            if(flag==0)ans.push_back(a);
            
            
        }
        return ans;
        
    }
};