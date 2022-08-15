class Solution {
public:
    int maxPower(string s) {
        int maxi=0;
        int cnt=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[i+1])
            {
                cnt=cnt+1;
            

            }
            else
            {
               maxi=max(maxi,cnt);
                cnt=1;
            }
            
         }
                    
        return maxi;
    }
};