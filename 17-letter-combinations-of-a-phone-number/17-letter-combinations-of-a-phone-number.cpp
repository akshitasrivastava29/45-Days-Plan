class Solution {
    void fun(int ind,string digits,string temp,vector<string>&ans,string mp[])
    {
        int n=digits.length();
        if(ind>=n)
        {
            ans.push_back(temp);
            return ;
        }
        int nums=digits[ind]-'0';
        string s=mp[nums];
        for(int i=0;i<s.length();i++)
        {
            temp.push_back(s[i]);
            fun(ind+1,digits,temp,ans,mp);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
        string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp="";
        vector<string>ans;
        if(n==0) return ans;
        fun(0,digits,temp,ans,mp);
        return ans;
        
        
        
    }
};