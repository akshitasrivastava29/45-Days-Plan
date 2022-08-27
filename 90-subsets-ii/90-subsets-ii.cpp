class Solution {
    void fun(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        int n=nums.size();
        ans.push_back(temp);
        
        for(int i=ind;i<n;i++)
        {
            if(i!=ind && nums[i]==nums[i-1])
            {
                continue;
            }
            temp.push_back(nums[i]);
            fun(i+1,nums,temp,ans);
            temp.pop_back();
        }
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        fun(0,nums,temp,ans);
        return ans;
        
    }
};