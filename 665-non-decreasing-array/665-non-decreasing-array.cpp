class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
//         int n=nums.size();
//         int cnt=0;
        
//         for(int i=0;i<n-1;i++)
//         {
             
//             if(nums[i]>nums[i+1])
//                {
//                  cnt+=1;
//                 if(cnt>1 ||(i>0 && i<n-2 &&  nums[i-1]>nums[i+1] && nums[i]>nums[i+2]))
//                 {
//                     return false;
//                 }
//              }
            
//         }
//         return true;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
           if(nums[i]>nums[i+1])
           {
               cnt+=1;
               if(cnt>1 || (i>0 && i<n-2 && nums[i-1]>nums[i+1] && nums[i]>nums[i+2]))
               {
                   return false;
               }
           }
        }
      return true;  
        
    }
};