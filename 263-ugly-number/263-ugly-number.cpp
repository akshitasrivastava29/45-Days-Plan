class Solution {
public:
    bool isUgly(int n) {
        int primes[3]={2,3,5};
        if(n<1) return false;
        for(auto it:primes)
        {
            while(n%it==0)
            {
                n=n/it;
            }
        }
        if(n==1)
        {
            return true;
        }
        return false;
        
    }
};