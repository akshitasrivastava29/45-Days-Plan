class Solution {
    private:
//     bool isPallindrome(string s,int start,int end)
//     {
//         while(start<=end)
//         {
//             if(s[start++]!=s[end--])
//             {
//                 return  false;
//             }
            
//         }
//          return true;
       
//     }
    bool ispall(string s,int st,int end)
    {
        while(st<=end)
        {
            if(s[st]!=s[end])
            {
                return false;
            }
            st++,end--;
        }
        return true;
    }
    private:
//     void fun(int ind,string s,vector<string>&temp,vector<vector<string>>&ans)

//     {
//         if(ind==s.length())
//         {
//             ans.push_back(temp);
//             return ;
//         }
//         for(int i=ind;i<s.length();i++)
//         {
//             if(isPallindrome(s,ind,i))
//             {
//                 temp.push_back(s.substr(ind,i-ind+1));
//                 fun(i+1,s,temp,ans);
//                 temp.pop_back();
//             }
//         }
//     }
    void getparts(int ind,string s,vector<string>&temp,vector<vector<string>>&ans)
    {
        if(ind==s.length())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.length();i++)
        {
            if(ispall(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                getparts(i+1,s,temp,ans);
                temp.pop_back();
            }
        }
    }
   
    
public:
    vector<vector<string>> partition(string s) {
        // vector<vector<string>>ans;
        // vector<string>temp;
        // fun(0,s,temp,ans);
        // return ans;
        
        vector<string >temp;
        vector<vector<string>>ans;
        getparts(0,s,temp,ans);
        return ans;
    }
};