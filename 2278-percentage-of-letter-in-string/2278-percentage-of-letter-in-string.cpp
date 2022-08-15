class Solution {
public:
    int percentageLetter(string s, char letter) {
       //  int n=s.length();
       //  int ans=0;
       //  unordered_map<char,int>mp;
       //  for(auto ch:s)
       //  {
       //      mp[s[ch]]++;
       //  }
       //  for(auto it:mp)
       //  {
       //      if(mp.find(letter)!=mp.end())
       //      {
       //          ans=it.second/2*100;
       //      }
       //      else
       //      {
       //      ans=0;
       //      }
       //  }
       // return ans; 
        
        int n=s.length();
        int temp=count(s.begin(),s.end(),letter);
        return (temp*100)/n;
    }
};