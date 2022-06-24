class Solution {
public:
    bool judgeSquareSum(int c) {
        // long long a=0;
        // long long b=sqrt(c);
        // long long sum;
        // while(a<=b)
        // {
        //     sum=a*a+b*b;
        //     if(sum==c)
        //     {
        //         return true;
        //     }
        //     else if(sum>c)
        //     {
        //         b--;
        //     }
        //     else
        //     {
        //         a++;
        //     }
        // }
        // return false;
        long long a=0;
        long long b=sqrt(c);
        long long sum=0;
        while(a<=b)
        {
            sum=a*a+b*b;
            if(sum==c)
            {
                return true;
            }
            else if(sum>c)
            {
                b--;
            }
            else
            {
                a++;
            }
        }
        return false;
    }
};