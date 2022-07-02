class Solution {

    
        
public:
    string decodeString(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string curs="";
                while(!st.empty() && st.top()!='['){
                    curs=st.top()+curs;
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty() && isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                int k=stoi(num);
                while(k--)
                {
                    for(int j=0;j<curs.length();j++)
                    {
                        st.push(curs[j]);
                    }
                }
            }
            
        }
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
    }
};