class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     unordered_map<string ,vector<string>>mp;
    //     string temp="";
    //     for(int i=0;i<strs.size();i++)
    //     {
    //          temp=strs[i];
    //         sort(strs[i].begin(),strs[i].end());
    //         mp[strs[i]].push_back(temp);
    //     }
    //     vector<vector<string>>res;
    //     for(auto it:mp)
    //     {
    //         res.push_back(it.second());
    //     }
    //     return res;
         
         // -----------------
    // unordered_map<string,vector<string>>mp;
    //     int n=strs.size();
    //     string temp="";
    //     for(int i=0;i<n;i++)
    //     {
    //         temp=strs[i];
    //         sort(strs[i].begin(),strs[i].end());
    //         mp[strs[i]].push_back(temp);
    //     }
    //     vector<vector<string >>res;
    //     for(auto it:mp)
    //     {
    //         res.push_back(it.second);
    //     }
    //     return res;
         // -----------------------
         // unordered_map<string,vector<string>>mp;
         // string temp="";
         // for(int i=0;i<strs.size();i++)
         // {
         //     temp=strs[i];
         //     sort(strs[i].begin(),strs[i].end());
         //     mp[strs[i]].push_back(temp);
         // }
         // vector<vector<string>>v;
         // for(auto it:mp)
         //     {
         //         v.push_back(it.second);
         //     }
         // return v;
         // ---------------------
         unordered_map<string,vector<string>>mp;
         string temp="";
         for(int i=0;i<strs.size();i++)
         {
             temp=strs[i];
             sort(strs[i].begin(),strs[i].end());
             mp[strs[i]].push_back(temp);
         }
         vector<vector<string>>v;
         for(auto it:mp)
         {
             v.push_back(it.second);
         }
         return v;
    }
};