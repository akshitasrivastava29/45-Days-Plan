class Solution {
public:
    bool backspaceCompare(string s, string t) {
//         stack<int>st1;
//         stack<int>st2;
//         string v1,v2;
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]!='#')
//             st1.push(s[i]);
//             else if(s[i]=='#' && !st1.empty())
//             {
//             st1.pop();
//             }
//         }
//         while(!st1.empty())
//         {
//             v1.push_back(st1.top());
//             st1.pop();
            
//         }
//         for(int i=0;i<t.length();i++)
//         {
//             if(t[i]!='#')
//                 st2.push(t[i]);
//             else if(t[i]=='#' && !st2.empty())
//             {
//                 st2.pop();
//             }
//         }
//         while(!st2.empty())
//         {
//             v2.push_back(st2.top());
//             st2.pop();
//         }
//         return v1==v2;
        
//         stack<int>st1;
//         stack<int>st2;
//         string v1,v2;
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]!='#')
//             {
//                 st1.push(s[i]);
//             }
//              else if(s[i]=='#' && !st1.empty())
//                 {
//                     st1.pop();
//                 }
//         }
//         while(!st1.empty())
//         {
//             v1.push_back(st1.top());
//             st1.pop();
//         }
//         for(int i=0;i<t.length();i++)
//         {
//             if(t[i]!='#')
//             {
//                 st2.push(t[i]);
//             }
//             else if(t[i]=='#' && !st2.empty())
//             {
//                 st2.pop();
//             }
//         }
//         while(!st2.empty())
//         {
//             v2.push_back(st2.top());
//                 st2.pop();
//         }
        
//         if(v1==v2)
//         {
//             return true;
//         }
//         return false;
        stack<char>st1;
        stack<char>st2;
        string v1,v2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
            {
                st1.push(s[i]);
            }
            else if(s[i]=='#' && !st1.empty())
            {
                st1.pop();
            }
        }
        while(!st1.empty())
        {
            v1.push_back(st1.top());
            st1.pop();
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
            {
                st2.push(t[i]);
            }
            else if(t[i]=='#' && !st2.empty())
            {
                st2.pop();
            }
        }
        while(!st2.empty())
        {
            v2.push_back(st2.top());
            st2.pop();
        }
        if(v1==v2)
        {
            return true;
        }
        return false;
    }
};