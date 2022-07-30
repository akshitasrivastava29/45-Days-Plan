class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>maxfreq(26,0);
        for(int i=0;i<words2.size();i++)
        {
            vector<int>curfreq(26,0);
            for(auto &c:words2[i])
            {
                curfreq[c-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                maxfreq[i]=max(maxfreq[i],curfreq[i]);
            }
            
        }
        vector<string>ans;
        for(int i=0;i<words1.size();i++)
        {
            vector<int>curfreq(26,0);
            for(auto &c:words1[i])
            {
                curfreq[c-'a']++;
            }
            bool flag=true;
            for(int i=0;i<26;i++)
            {
                if(curfreq[i]<maxfreq[i])
                {
                    flag= false;
                    break;
                }
            }
            if(flag==true)
            {
                ans.push_back(words1[i]);
            }
        }
        return ans;
        
    }
};