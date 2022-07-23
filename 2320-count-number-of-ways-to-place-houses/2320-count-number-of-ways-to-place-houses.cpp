class Solution {
    #define ll long long
public:
    int countHousePlacements(int n) {
      
         
       
//         long long int  oldh=1;
//         long long int  olds=1;
//         for(int i=2;i<=n;i++)
//         {
//             int newh=olds;
//             int news=olds+oldh;
//             oldh=newh;
//             olds=news;
//         }
//         long long int total=olds+oldh;
//         total=(total*total)%mod;
//         return total;
        
        ll mod=1e9+7;
        ll space=1,house=1;
        ll totways=space+house;
        for(int i=2;i<=n;i++)
        {
            house=space;
            space=totways;
            totways=(space+house)%mod;
        }
        return (totways*totways)%mod;
        
        
    }
};