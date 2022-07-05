class Solution {
    
public:
    string longestCommonPrefix(vector<string>& strs) {
//         int n=strs.size();
//         int l=INT_MAX;
//         if(strs.size()==0)
//         {
//             return "";
//         }
//         string c=strs[0];
//         for(int i=1;i<n;i++)
//           {
//                int j=0,k=0,a=0;
//             while(j<c.size()&&k<strs[i].size())
//             {
//                 if(c[j]==strs[i][k])
//                 {
//                     a++;
//                 }
//                 else
//                 {
//                     break;
//                 }
//                 j++,k++;
//             }
//             l=min(l,a);
            
//         }
//         return c.substr(0,l);
        
//         int n=strs.size();
//         string ans="";
//         if(strs.size()==0)
//         {
//             return "";
//         }
//         for(int i=0;i<strs[0].length();i++)
//         {
//             char ch=strs[0][i];
        
//         bool match=true;
//         for(int j=1;j<n;j++)
//         {
//             if( strs[j].size()<i || ch!=strs[j][i])
//             {
//                 match=false;
//                 break;
//         }
//        }
//         if(match==false)
//         {
//             break;
//         }
//         else
//         {
//             ans.push_back(ch);
            
//         }
//         }
        
//         return ans;
        
        int n=strs.size();
        string ans="";
        if(n==0)return "";
        for(int i=0;i<strs[0].length();i++)
        {
            char ch=strs[0][i];
            bool flag=true;
            for(int j=1;j<n;j++)
            {
                if(strs[j].size()<i || ch!=strs[j][i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
            {
                break;
            }
            else
            {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};