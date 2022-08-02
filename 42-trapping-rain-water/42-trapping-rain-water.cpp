class Solution {
public:
    int trap(vector<int>& height) {
        int amount=0;
        int n=height.size();
//         for(int i=0;i<n;i++)
//         {
//            int j=i;
//             int leftmax=0,rightmax=0;
//              while(j>=0)
//              {
//                  leftmax=max(leftmax,height[j]);
//                  j--;
//              }
//             j=i;
//             while(j<n)
//             {
//                 rightmax=max(rightmax,height[j]);
//                 j++;
//             }
//             amount+=min(leftmax,rightmax)-height[i];
//         }
//         return amount;
    
        // int prefix[n],suffix[n];
        // prefix[0]=height[0];
        // for(int i=1;i<n;i++)
        // {
        //     prefix[i]=max(prefix[i-1],height[i]);
        // }
        // suffix[n-1]=height[n-1];
        // for(int i=n-1;i>=0;i--)
        // {
        //     suffix[i]=max(suffix[i+1],height[i]);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     amount+=min(prefix[i],suffix[i])-height[i];
        // }
        // return amount;
        // --------------
//         int leftmax=0,rightmax=0;
//         int left=0,right=n-1;
//         while(left<right)
//         {
        
//          if(height[left]<=height[right])
//             {
//                 if(height[left]>=leftmax)
//                 {
//                     leftmax=height[left];
//                 }
//              else
//                  {
//                     amount+=leftmax-height[left];
//                  }
//              left++;
//             }
//         else
//         {
//             if(height[right]>=rightmax)
//             {
//                 rightmax=height[right];
//             }
//             else
//             {
//                 amount+=rightmax-height[right];
               
//             }
//              right--;
//         }
//         }
//        return amount; 
        int leftmax=0,rightmax=0;
        int left=0,right=n-1;
            while(left<right)
            {
                if(height[left]<=height[right])
                {
                    if(height[left]>=leftmax)
                    {
                        leftmax=height[left];
                    }
                    else
                    {
                        amount+=leftmax-height[left];
                    }
                    left++;
                }
                else
                {
                        if(height[right]>=rightmax)
                        {
                            rightmax=height[right];
                        }
                        else
                        {
                            amount+=rightmax-height[right];
                        }
                        right--;
                    }
                }
        return amount;
    }
};