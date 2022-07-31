class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int  n=nums.size();
        // vector<int>freq(n+1,0);
        // vector<int>ans;
        // for(int i=0;i<n;i++)
        // {
        //    if(freq[nums[i]]==0)
        //       {
        //         freq[nums[i]]+=1;
        //       }
        //     else
        //     {
        //       ans.push_back(nums[i]);
        //     }
        // }
        // return ans;
        // ___________________________---
        // vector<int >ans;
        // for(auto n:nums){
        //     n=abs(n);
        //     if(nums[n-1]>0)
        //     {
        //         nums[n-1]*=-1;
        //     }
        //     else
        //     {
        //         ans.push_back(n);
        //     }
        // }
        // return ans ;
        // ------------
        unordered_map<int,int>mp;
         vector<int>res;
        for(int it:nums)
        {
            if(mp[it])
            {
                res.push_back(it);
            }
            else if(mp[it]>=2)
            {
                continue;
            }
            mp[it]++;
        }
        return res;
    }
};