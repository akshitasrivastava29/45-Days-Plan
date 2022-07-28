class Solution {
public:
    bool isAnagram(string s, string t) {
     //    int n=s.length();
     //    if(s.length()!=t.length())return false;
     // unordered_map<char,int>mp;
     //    for(int i=0;i<n;i++)
     //    {
     //        mp[s[i]]++;
     //        mp[t[i]]--;
     //    }
     //    for(auto count:mp)
     //    {
     //        if(count.second)
     //        {
     //            return false;
     //        }
     //    }
     //    return true;
        int n=s.length();
        int m=t.length();
         if(n!=m)
         {
             return false;
         }
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto cnt:mp)
        {
            if(cnt.second>0)
            {
                return false;
            }
        }
        return true;
        
    }
};