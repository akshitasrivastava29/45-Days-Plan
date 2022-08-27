class Solution {
    void generate(int n,int o,int c,string temp,vector<string>&ans)
    {
        if(o==0 && c==0)
        {
            ans.push_back(temp);
            return;
        }
        if(o!=0)
        {
            string t1=temp;
            t1.push_back('(');
            generate(n,o-1,c,t1,ans);
        }
        if(c>o)
        {
            string t2=temp;
            t2.push_back(')');
            generate(n,o,c-1,t2,ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
      int o=n,c=n;
        string temp="";
        vector<string>ans;
        generate(n,o,c,temp,ans);
        return ans;
        
    }
};