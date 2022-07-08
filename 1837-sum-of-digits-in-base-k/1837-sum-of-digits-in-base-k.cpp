class Solution {
public:
    int sumBase(int n, int k) {
        int ans=0;
        while(n>=k)
        {
            int x=n%k;
            ans=ans*10;
            ans+=x;
            n=n/k;
        }
        if(n>0){
        ans=ans*10;
        ans=ans+n;
        }
        int tot=0;
        while(ans)
        {
            tot=tot+(ans%10);
            ans=ans/10;
        }
       return tot; 
    }
};