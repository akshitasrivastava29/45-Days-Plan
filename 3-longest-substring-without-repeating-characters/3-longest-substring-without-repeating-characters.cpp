class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
//         vector<int>mp(256,-1);
//         int i=0,j=0;
//         int maxlen=0;
//         while(j<n)
//         {
//            if( mp[s[j]]!=-1)
            
//                 i=max(mp[s[j]]+1,i);
//                 mp[s[j]]=j;
//                 maxlen=max(maxlen,j-i+1);
//                j++;
            
//         }
//         return maxlen;
//         // _________________________-
//         unordered_map<char,int>mp;
//         int i=0,j=0;
//         int ans=0;
//         while(j<n)
//         {
//             mp[s[j]]++;
//             if(mp.size()==j-i+1)
//             {
//                 ans=max(ans,j-i+1);
//                 j++;
//             }
//             else if(mp.size()<j-i+1)
//             {
//                 while(mp.size()<j-i+1)
//                 {
//                     mp[s[i]]--;
//                     if(mp[s[i]]==0)
//                     {
//                         mp.erase(s[i]);

//                     }
//                      i++;
//                 }
//                 j++;
//             }
//         }
//         return ans;
// // __________________________________-
        // unordered_map<char,int>mp;
        // int i=0,j=0;
        // int maxi=0;
        // while(j<n)
        // {
        //     mp[s[j]]++;
        //     if(mp.size()==j-i+1)
        //     {
        //         maxi=max(maxi,j-i+1);
        //         j++;
        //     }
        //     else if(mp.size()<j-i+1)
        //     {
        //         while(mp.size()<j-i+1)
        //         {
        //         mp[s[i]]--;
        //         if(mp[s[i]]==0)
        //         {
        //             mp.erase(s[i]);
        //         }
        //         i++;
        //          }
        //     j++;
        //     }
        // }
        // return maxi;
        unordered_map<char,int>mp;
        int i=0,j=0;
        int maxi=0;
        while(j<n)
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1)
            {
                maxi=max(maxi,j-i+1);
                j++;
            }
                else if(mp.size()<j-i+1)
                {
                    while(mp.size()<j-i+1)
                    {
                        mp[s[i]]--;
                        if(mp[s[i]]==0)
                        {
                            mp.erase(s[i]);
                        }
                        i++;
                    }
                    j++;
                }
        }
        
     return maxi;   
    }
};