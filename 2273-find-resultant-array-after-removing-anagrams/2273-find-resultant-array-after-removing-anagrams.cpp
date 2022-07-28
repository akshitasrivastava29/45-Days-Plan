class Solution {
    bool anagram(string s,string t)
    {
        int n=s.length();
        int m=t.length();
        if(n!=m)return false;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto it:mp)
        {
            if(it.second>0)
            {
                return false;
            }
        }
        return true;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        for(int i=1;i<words.size();i++)
        {
            if(anagram(words[i],words[i-1]))
            {
                words.erase(words.begin()+i);
                i--;
            }
        }
        return words;
        
        
    }
};