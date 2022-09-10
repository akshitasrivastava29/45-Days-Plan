class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        for(int i=5;i<=n;i+=5)
        {
            int temp=i;
            while(temp%5==0)
            {
                sum++;
                temp/=5;
            }
        }
        return sum;
        
    }
};