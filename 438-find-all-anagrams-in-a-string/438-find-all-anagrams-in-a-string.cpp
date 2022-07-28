class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // unordered_map<char,int>mp;
        // vector<int>v;
        // for(int i=0;i<p.size();i++)
        // {
        //     mp[p[i]]++;
        // }
        // int cnt=mp.size(),i=0,j=0,k=p.size();
        // while(j<s.length())
        // {
        //     if(mp.find(s[j])!=mp.end())
        //     {
        //         mp[s[j]]--;
        //         if(mp[s[j]]==0)
        //             cnt--;
        //     }
        //     if(j-i+1<k)
        //     {
        //         j++;
        //     }
        //     else if(j-i+1==k)
        //     {
        //         if(cnt==0)
        //         {
        //             v.push_back(i);
        //         }
        //         if(mp.find(s[i])!=mp.end())
        //         {
        //             mp[s[i]]++;
        //             if(mp[s[i]]==1){
        //             cnt++;
        //             }
        //         }
        //         i++,j++;
        //     }
        // }
        // return v;
        // -----------------------
        // unordered_map<char,int>mp;
        // vector<int>ans;
        // for(int i=0;i<p.length();i++)
        // {
        //     mp[p[i]]++;
        //  }
        // int cnt=mp.size();
        // int i=0,j=0,k=p.size();
        // while(j<s.length())
        // {
        //     if(mp.find(s[j])!=mp.end())
        //     {
        //         mp[s[j]]--;
        //         if(mp[s[j]]==0)
        //             cnt--;
        //     }
        //     if(j-i+1<k)
        //     {
        //         j++;
        //     }
        //     else if(j-i+1==k)
        //     {
        //         if(cnt==0)
        //         {
        //             ans.push_back(i);
        //         }
        //         if(mp.find(s[i])!=mp.end())
        //         {
        //             mp[s[i]]++;
        //             if(mp[s[i]]==1)
        //             {
        //                 cnt++;
        //             }
        //         }
        //         i++,j++;
        //     }
        // }
        // return ans;
        // -------------
        unordered_map<char,int>mp;
        vector<int>ans;
        for(int i=0;i<p.length();i++)
        {
            mp[p[i]]++;
        }
        int cnt=mp.size();
        int i=0,j=0,k=p.size();
        while(j<s.length())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                {
                    cnt--;
                }
            }
           if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(cnt==0)
                {
                    ans.push_back(i);
                }
                if(mp.find(s[i])!=mp.end())
                {
                    mp[s[i]]++;
                    if(mp[s[i]]==1)
                    {
                        cnt++;
                    }
                }
                i++,j++;
            }
        }
        return ans;
            
        
    
        
//         unordered_map<char,int>m;
        
//         vector<int>v;
        
//         for(int i=0;i<p.size();i++)m[p[i]]++;
        
//         int count=m.size(),i=0,j=0,k=p.size();
        
//         while(j<s.size()){
//             if(m.find(s[j])!=m.end()){
//                 m[s[j]]--;
//                 if(m[s[j]]==0)count--;
//             }
            
//             if(j-i+1<k) j++;
            
//             else if(j-i+1==k){
//                 if(count==0)v.push_back(i);
                
//                 if(m.find(s[i])!=m.end()){
//                     m[s[i]]++;
//                     if(m[s[i]]==1)count++;
//                 }
//                 i++;
//                 j++;
//             }
//         }
//         return v;
    




    }
};