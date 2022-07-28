class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string str="";
        for(auto ch:s)
        {
            if(ch=='(')
            {
                if(!st.empty())
                {
                    str+='(';
                }
                st.push('(');
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    str+=')';
                }
            }
        }
        return str;
        
    }
};