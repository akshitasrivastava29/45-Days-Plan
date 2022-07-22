class Solution {
    // private:
    // void solve(int open,int close,string op,vector<string>&ans)
    // {
    //     if(open==0&&close==0)
    //     {
    //         ans.push_back(op);
    //         return;
    //     }
    //     if(open!=0)
    //     {
    //         string op1=op;
    //         op1.push_back('(');
    //         solve(open-1,close,op1,ans);
    //     }
    //     if(close>open)
    //     {
    //         string op2=op;
    //         op2.push_back(')');
    //         solve(open,close-1,op2,ans);
    //     }
    // }
    private:
    // void fun(int o,int c, string ans ,vector<string >&res)
    // {
    //     if(o==0 && c==0)
    //     {
    //         res.push_back(ans);
    //     }
    //     if(o!=0)
    //     {
    //         string ans1=ans;
    //         ans1.push_back('(');
    //         fun(o-1,c,ans1,res);
    //     }
    //     if(c>o)
    //     {
    //         string ans2=ans;
    //         ans2.push_back(')');
    //         fun(o,c-1,ans2,res);
    //     }
    // }
    
    void gen(int o,int c,string temp,vector<string>&ans)
    {
        if(o==0 && c==0)
        {
            ans.push_back(temp);
            return ;
           
        }
        if(o!=0)
        {
            string t1=temp;
            t1.push_back('(');
            gen(o-1,c,t1,ans);
        }
        if(c>o)
        {
            string t2=temp;
            t2.push_back(')');
            gen(o,c-1,t2,ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        // int open=n,close=n;
        // string op="";
        // vector<string>ans;
        // solve(open,close,op,ans);
        // return ans;
        // --
        // int o=n,c=n;
        // string ans="";
        // vector<string>res;
        // fun(o,c, ans,res);
        // return res;
        // -
        int o=n,c=n;
        string temp="";
        vector<string>ans;
        gen(o,c,temp,ans);
        return ans;
        
    }
};