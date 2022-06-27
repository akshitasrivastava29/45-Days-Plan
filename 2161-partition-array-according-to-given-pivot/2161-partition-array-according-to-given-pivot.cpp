class Solution {
    
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
//         
        // vector<int>ans;
        // for(auto it:nums)
        // {
        //     if(it<pivot)
        //     {
        //         ans.push_back(it);
        //     }
        // }
        // for(auto it:nums)
        // {
        //     if(it==pivot)
        //     {
        //         ans.push_back(it);
        //     }
        // }
        // for(auto it:nums)
        // {
        //     if(it>pivot)
        //     {
        //         ans.push_back(it);
        //     }
        // }
        // return ans;
        vector<int>ans;
        int j=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                nums[j++]=nums[i];
            }
            else if(nums[i]==pivot)
            {
                cnt++;
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        while(cnt--)
        {
            nums[j++]=pivot;
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[j++]=ans[i];
        }
        return nums;
    }
};