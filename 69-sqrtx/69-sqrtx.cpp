class Solution {
public:
    int mySqrt(int x) {
        long long ans=0;
        if(x==0)
        {
            return 0;
        }
        long long low=0,high=x,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid<x)
            {
                low=mid+1;
                ans=mid;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
        
    }
};