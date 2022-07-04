class Solution {
//     public:
//     int squaresum(int num){
//         // int sum=0;
//         // while(num)
//         // {
//         //     int rem=num%10;
//         //     sum+=rem*rem;
//         //     num=num/10;
//         // }
//         // return sum;
        
//     }

public:
    bool isHappy(int n) {
//         if(n<=0)
//             return false;
//         unordered_set<int>s;
//         while(s.find(n)==s.end())
//         {
//             s.insert(n);
        
//         n=squaresum(n);
//         if(n==1)
//         {
//             return true;
//         }
//         }
//         return false;
        // ____________________________
        // int val,ind;
        // set<int>s;
        // while(1)
        // {
        //     val=0;
        //     while(n)
        //     {
        //         ind=n%10;
        //         val+=ind*ind;
        //         n=n/10;
        //     }
        //     if(val==1)
        //     {
        //         return true;
        //     }
        //     else if(s.find(val)!=s.end())
        //     {
        //         return false;
        //     }
        //     s.insert(val);
        //     n=val;
        // }
        // return false;
        int rem ,last,ind;
        set<int>s;
        while(1)
        {
            rem=0;
            while(n)
            {
            last=n%10;
            rem+=last*last;
            n=n/10;
            }
        
        if(rem==1)
        {
            return true;
        }
        else if(s.find(rem)!=s.end())
        {
            return false;
        }
        s.insert(rem);
            n=rem;
        }
        return false;
    }
};