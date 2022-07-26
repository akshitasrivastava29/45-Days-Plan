class Solution {
public:
    int longestPalindrome(string s) {
    //     int n=s.length();
    //     int cnt=0;
    //     unordered_map<char,int>mp;
    //     for(auto&ch:s)
    //     {
    //         mp[ch]++;
    //     }
    //     for(auto i:mp)
    //     {
    //     if(i.second%2!=0)
    //     {
    //        cnt++;
    //     }
    // }
    //     if(cnt>1)
    //     {
    //         return (n-cnt+1);
    //     }
    //     return n;
        // --
        // int n=s.length();
        // int cnt=0;
        // unordered_map<char,int>mp;
        // for(auto&c:s)
        // {
        //     mp[c]++;
        // }
        // int res=0;
        // bool oddfound=false;
        // for(auto &it :mp)
        // {
        //     if(it.second%2==0)
        //     {
        //         res+=it.second;
        //     }
        //     else
        //     {
        //         oddfound=true;
        //         res+=it.second-1;
        //     }
        // }
        // if(oddfound==true)
        // {
        //     res=res+1;
        // }
        // return res;
        int n=s.length();
        int cnt=0;
        unordered_map<char,int>mp;
        for(auto &c :s){
            mp[c]++;
        }
        int res=0;
        bool flag=false;
        for(auto it:mp)
        {
            if(it.second%2==0)
            {
                res+=it.second;
            }
            else
            {
                flag=true;
                res+=it.second-1;
            }
        }
        if(flag==true)
        {
            res=res+1;
        }
        return res;
    }
};