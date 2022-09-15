class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        unordered_map<int,int>mp;
        sort(changed.begin(),changed.end());
        for(auto it:changed)
        {
            mp[it]++;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(mp[changed[i]]==0)
            {
                continue;
            }
                mp[changed[i]]--;
            
                if(mp[2*changed[i]])
                {
                    v.push_back(changed[i]);
                    mp[2*changed[i]]--;
                }
                else
                {
                    vector<int>blank;
                    return blank;

                }
          }
        
        return v;
        
    }
};