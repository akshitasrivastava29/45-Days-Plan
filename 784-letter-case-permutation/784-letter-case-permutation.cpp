class Solution {
    private:
    void solve(string s, int i,vector<string>&ans)
    {
        int n=s.length();
        if(i==n)
        {
            ans.push_back(s);
            return;
        }
        if(isalpha(s[i]))
        {
            solve(s,i+1,ans);
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
                solve(s,i+1,ans);
            }
            else if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
                solve(s,i+1,ans);
            }
        }
        else if(isdigit(s[i]))
        {
            solve(s,i+1,ans);
        }
        
    }
public:
    vector<string> letterCasePermutation(string s) {
        int n=s.length();
        vector<string>ans;
        solve(s,0,ans);
        return ans;
        
        
    }
};