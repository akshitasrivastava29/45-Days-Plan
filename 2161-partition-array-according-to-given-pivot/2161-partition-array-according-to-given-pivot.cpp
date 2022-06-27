class Solution {
    
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
//         int n=nums.size();
//         int st=0,end=n-1;
//          for(int i=0;i<n;i++)
//          {
//              if(nums[st]<pivot)
//              {
//                  st++;
//              }
//              else if(nums[end]>pivot)
//              {
//                  end--;
//              }
//              else if(nums[st] >pivot && nums[end] <pivot)
//              {
//                  swap(nums[st],nums[end]);
//              }
            
//          }
//         return nums;
        vector<int>ans;
        for(auto it:nums)
        {
            if(it<pivot)
            {
                ans.push_back(it);
            }
        }
        for(auto it:nums)
        {
            if(it==pivot)
            {
                ans.push_back(it);
            }
        }
        for(auto it:nums)
        {
            if(it>pivot)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }
};