class Solution {
public:
    int reverse(int x) {
       // long long rem=0;
       //  while(x>0)
       //  {
       //  long long lastdigit=x%10;
       //  if((rem>0 && rem>(INT_MAX-lastdigit)/10)||(rem<0  && rem<(INT_MIN-lastdigit)/10))
       //  rem=rem*10+lastdigit;
       //      x=x/10;
       //  }
       //  int rev = 0;
       // while (x){
       //     int digit = x % 10;
       //     x /= 10;
       //     if ((rev > 0 && rev > (INT_MAX - digit)/10) | (rev < 0 && rev < (INT_MIN - digit)/10)) return 0;
       //     rev = rev * 10 + digit;
       // }
       // return rev;
        

         // return rem;
        
        // long long ans=0;
        // long long temp;
        // while(x)
        // {
        //    long long last=x%10;
        //     temp=ans*10+last;
        //     if(temp/10!=ans)
        //     {
        //         return 0;
        //     }
        //     ans=temp;
        //     x=x/10;
        // }
        // return ans;
        
        int rev=0;
        while(x)
        {
            int lastdigit=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10)return 0;
            rev=rev*10+lastdigit;
            x=x/10;
        }
        return rev;
        
    }
};