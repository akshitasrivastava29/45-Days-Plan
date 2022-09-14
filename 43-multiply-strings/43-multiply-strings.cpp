class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        if(num1=="0" || num2=="0") return "0";
        vector<int>v(n+m,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                v[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                v[i+j]+=v[i+j+1]/10;
                v[i+j+1]%=10;
            }
        }
        int i=0;
        while(i<v.size() && v[i]==0)
        {
            i++;
        }
        string res="";
        while(i<v.size())
        {
            res.push_back(v[i++]+'0');
            
        }
       return res; 
        
    }
};