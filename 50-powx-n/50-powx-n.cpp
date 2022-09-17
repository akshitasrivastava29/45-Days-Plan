class Solution {
public:
    double myPow(double x, int n) {
        // double ans=1.0;
        // long long nn=n;
        // if(nn<0) nn=nn*-1;
        // while(nn)
        // {
        //     if(nn%2) //odd
        //     {
        //         ans=ans*x;
        //         nn=nn-1;
        //     }
        //     else //even
        //     {
        //         x=x*x;
        //         nn=nn/2;
        //     }
        // }
        // if(n<0) ans=(double)(1.0)/(double)(ans);   //inverse
        // return ans;
        
        double ans=1.0;
        long long nn=n;
        if(nn<0) nn=nn*(-1);
        while(nn)
        {
            if(nn%2)
            {
                ans=ans*x;
                nn=nn-1;
            }
            else
            {
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0) ans=(double)(1.0)/(double)(ans);
        return ans;
    }
};