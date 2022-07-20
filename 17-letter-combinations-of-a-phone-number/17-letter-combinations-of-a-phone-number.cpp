class Solution {
    private:
//     void solve(string digits,string op,vector<string>&ans,string mapping[],int ind)
//     {
//         int len=digits .length();
//         if(ind>=len)
//         {
//             ans.push_back(op);
//             return;
//         }
//         int number=digits[ind]-'0';
//         string alpha=mapping[number];
//         for(int i=0;i<alpha.length();i++)
//         {
//             op.push_back(alpha[i]);
//             solve(digits,op,ans,mapping,ind+1);
//             op.pop_back();
                
//         }
        
//     }
    void getop(string digits,string temp,vector<string>&ans,string keypad[],int ind)
    {
        int len=digits.length();
        if(ind>=len)
        {
            ans.push_back(temp);
            return ;
        }
        int num=digits[ind]-'0';
        string s=keypad[num];
        for(int i=0;i<s.length();i++)
        {
            temp.push_back(s[i]);
            getop(digits,temp,ans,keypad,ind+1);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
//         int len=digits .length();
//        vector<string>ans;
//         string op="";
//           if(len==0)
//          {
//              return ans;
//          }
        
//         int ind=0;
//         string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
//         solve(digits,op,ans,mapping,ind);
//         return ans;
        
        int len=digits.length();
        vector<string>ans;
        string temp="";
        if(len==0)return ans;
        string keypad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        getop(digits,temp,ans,keypad,0);
        return ans;
        
    }
};