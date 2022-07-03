class Solution {
    private:
    int fun(vector<int>&piles,int perhr,int h)
    {
        int n=piles.size();
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=piles[i]/perhr;
            if(piles[i]%perhr)
            {
                cnt+=1;
            }
        }
        return cnt<=h;
    }
    // private:
//     int fun(vector<int>&piles,int perhr,int h)
//     {
//         int n=piles.size();
//         int m=0;
//         for(int i=0;i<n;i++)
//         {
//             m+=piles[i]/perhr;
//             if(piles[i]%perhr)
//             {
//                 m+=1;
//             }
//         }
        
//      return m<=h;
//     }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      //   int n=piles.size();
      //   int low=1;
      //   int maxi=piles[0];
      //   int ans;
      //   for(int i=0;i<n;i++)
      //   {
      //       maxi=max(maxi,piles[i]);
      //   }
      //   int high=maxi;
      //   while(low<=high)
      //   {
      //       int mid=low+(high-low)/2;
      //       if(fun(piles,mid,h))
      //       {
      //           ans=mid;
      //           high=mid-1;
      //       }
      //       else
      //       {
      //           low=mid+1;
      //       }
      //   }
      // return ans;
        int n=piles.size();
        int low=1;
        int maxi=piles[0];
        int ans;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,piles[i]);
        }
        int high=maxi;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(fun(piles,mid,h))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};