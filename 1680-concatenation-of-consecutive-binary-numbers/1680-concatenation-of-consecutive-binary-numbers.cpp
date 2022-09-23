class Solution {
private:
    int totnobits(int n)
    {
        return log2(n)+1;
    }
    
public:
    int concatenatedBinary(int n) {
        long ans=0;
        long mod=1e9+7;
        for(int i=1;i<=n;i++)
        {
            int no=totnobits(i);
            ans=((ans<<no)%mod+i)%mod;
        }
        
       return ans; 
    }
};