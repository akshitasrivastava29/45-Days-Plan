class Solution {
public:
    bool isPalindrome(int x) {
        int last,reverse=0;
        if(x==0) return true;
        if(x%10==0) return false;
        while(x>reverse)
        {
            last=x%10;
            if(reverse>INT_MAX/10 || reverse<INT_MIN/10) return false;
            reverse=reverse*10+last;
            x=x/10;
        }
        if(reverse==x || x==reverse/10)
        {
            return true;
        }
        return false;
    }
};