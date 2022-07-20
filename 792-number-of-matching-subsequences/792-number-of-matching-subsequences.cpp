class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.length();
        vector<vector<int>>charind(26);
        for(int i=0;i<n;i++)
        {
            charind[s[i]-'a'].push_back(i);
        }
        int cnt=0;
        
        for(int i=0;i<words.size();i++)
        {
            bool isSeq=true;
            int lastind=-1;
            for(auto ch:words[i])
            {
                auto it=upper_bound(charind[ch-'a'].begin(),charind[ch-'a'].end(),lastind);
                if(it==charind[ch-'a'].end()){
                    isSeq=false;
                    break;
                }
                else
                {
                    lastind=*it;
                }
            }
             if(isSeq)
        {
            cnt++;
        }
        
        }
       return cnt;
        
    }
};