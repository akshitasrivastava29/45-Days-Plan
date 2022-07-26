class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int,bool>mp;
//         for(auto &it:nums)
//         {
        
//         if(mp.find(it)!=mp.end())
//         {
//             return true;
//         }
//             else{
//         mp[it]=true;
//         }
//         }
//         return false;
        unordered_map<int ,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                return true;
            }
        }
        return false;
        
    }
};