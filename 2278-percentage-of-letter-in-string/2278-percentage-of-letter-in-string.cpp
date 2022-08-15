class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            if(it.first==letter)
            {
                ans=(it.second*100/n);
            }
        }
       return ans; 
        
        // int n=s.length();
        // int temp=count(s.begin(),s.end(),letter);
        // return (temp*100)/n;
    }
};