class Solution {
    private:
//     string common(string &a,string &b)
//     {
//         string ans;
//         unordered_map<char,int>mp;
//         for(int i=0;i<a.length();i++)
//             {
//                 mp[a[i]]++;
//             }
//         for(int i=0;i<b.length();i++)
//         {
//             if (mp[b[i]]>0&&mp.find(b[i])!=mp.end())
//             {
//                 ans+=b[i];
//                 mp[b[i]]--;
//             }
//         }
//         return ans;
        
//     }
    
public:
    vector<string> commonChars(vector<string>& words) {
       //  string fans=words[0];
       //  for(int i=0;i<words.size();i++){
       //      string ans=common(fans,words[i]);
       //      fans=ans;
       //  }
       //  vector<string>res;
       //  for(int i=0;i<fans.size();i++)
       //  {
       //      string s(1,fans[i]);
       //      res.push_back(s);
       //  }
       // return res;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto ch:words[0])
        {
            v1[ch-'a']++;
        }
        for(int i=1;i<words.size();i++)
        {
            for(auto ch:words[i])
            {
                v2[ch-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                v1[i]=min(v1[i],v2[i]);
                v2[i]=0;
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++)
        {
            if(v1[i]>0)
            {
                int cnt=v1[i];
                while(cnt--)
                {
                    char x=i+'a';
                    string s;
                        s=x;
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};