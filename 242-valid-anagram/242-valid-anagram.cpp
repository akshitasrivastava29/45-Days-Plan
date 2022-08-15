class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        int n=s.length();
        int m=t.length();
        if(n!=m)return false;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto  it:mp)
        {
            if(it.second>0)
            {
                return false;
            }
        }
        return true;
        
    }
};