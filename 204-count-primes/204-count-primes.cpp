class Solution {
    // private:
    // long long sieve(int n)
    // {
    //     vector<bool>primes(n+1,true);
    //     int cnt=0;
    //     for(long long i=2;i<n;i++)
    //     {
    //         if(primes[i]==true)
    //         {
    //             cnt++;
    //         }
    //         for(long long j=i*i;j<=n;j+=i)
    //         {
    //             primes[j]=false;
    //         }
    //     }
    //     return cnt;
    // }
    
    // private:
    //  long long sieve(int n)
    //  {
    //     vector<bool>primes(n+1,true);
    //      int cnt=0;
    //      for(long long i=2;i<n;i++)
    //      {
    //        if(primes[i]==true)
    //        {
    //             cnt++;
    //        }
    //          for(long long j=i*i;j<=n;j+=i)
    //          {
    //             primes[j]=false;
    //          }
    //      }
    //      return cnt;
     // }
    private:
    long long sieve(int n)
    {
        vector<bool>primes(n+1,true);
        int cnt=0;
        for(long long i=2;i<n;i++)
        {
            if(primes[i]==true)
            {
                cnt++;
            }
            for(long long j=2*i;j<=n;j+=i)
            {
                primes[j]=false;
            }
        }
        return cnt;
    }
public:
    int countPrimes(int n) {
         return sieve(n);
        
        // ---------------------
        
        
    }
};