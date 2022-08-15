class Solution {
    // private:
    // bool isValid(char ch)
    // {
    //     if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9')
    //     {
    //         return true;
    //     }
    //     return false;
    // }
    // char tolowerCase(char ch)
    // {
    //     if(ch>='a' && ch<='z' ||  ch>='0'&& ch<='9')
    //     {
    //         return ch;
    //     }
    //     else
    //     {
    //         char temp= ch-'A'+'a';
    //         return temp;
    //     }
    // }
    // bool ispall(string s)
    // {
    //     int n=s.length();
    //     int st=0,end=n-1;
    //     while(st<=end)
    //     {
    //         if(s[st++]==s[end--])
    //         {
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    private:
    bool isvalid(char ch)
     {
         if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9')
         {
             return true;
         }
         return false;
    }
    private:
    bool isPall(string s)
    {
        
        int st=0,end=s.length()-1;
        while(st<=end)
        {
            if(s[st++]!=s[end--])
            {
                return false;
            }
        }
        return true;
    }
    private:
    char tolowerCase(char ch)
    {
        if(ch>='a' && ch<='z' || ch>='0' && ch<='9')
        {
            return ch;
        }
        else
        {
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    
public:
    bool isPalindrome(string s) {
        // int n=s.length();
        // string temp="";
        // for(int i=0;i<n;i++)
        // {
        //     if(isValid(s[i]))
        //     {
        //         temp.push_back(s[i]);
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     temp[i]=tolowerCase(temp[i]);
        // }
        // return  ispall(temp);
        
         int n=s.length();
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(isvalid(s[i]))
               {
                 str.push_back(s[i]);  
               }
        }
        for(int i=0;i<str.length();i++)
        {
            str[i]=tolowerCase(str[i]);
        }
        return isPall(str);
    }
};