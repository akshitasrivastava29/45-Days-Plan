class Solution {
public:
    bool isValid(string s) {
       // stack<char>st;
       //  int it;
       //  for(auto it: s)
       //  {
       //      if(it=='('||it=='{'||it=='[')
       //      {
       //          st.push(it);
       //      }
       //      else
       //      {
       //          if(st.empty() || st.top()=='('&& it!=')'|| st.top()=='{' && it!='}'||st.top()=='['&& it!=']')
       //              return false;
       //          else
       //          {
       //              st.pop();
       //          }
       //      }
       //  }
       //  if(st.empty())
       //  {
       //      return true;
       //  }
       //  return false;
        // ----------------------
        // stack<char>st;
        // for(auto ch:s)
        // {
        //     if(ch=='(' || ch=='[' || ch=='{')
        //     {
        //         st.push(ch);
        //     }
        //     else
        //     {
        //         if(st.empty() || st.top()=='(' && ch!=')' || st.top()=='{' && ch!='}' || st.top()=='[' && ch!=']')
        //             return false;
        //         else
        //         {
        //             st.pop();
        //         }
        //     }
        // }
        // if(st.empty())
        // {
        //     return true;
        // }
        // return false;
        // ---------------
        
        stack<char>st;
        for(auto ch:s)
        {
            if(ch=='(' || ch=='[' || ch=='{')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty() || st.top()=='(' && ch!=')' || st.top()=='{' && ch!='}'|| st.top()=='['&& ch!=']')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};