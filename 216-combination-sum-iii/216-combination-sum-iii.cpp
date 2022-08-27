class Solution {
    void fun(int ind,int k,int n,vector<int>nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(temp.size()==k)
        {
            if(n==0)
            {
            ans.push_back(temp);
            }
        }
        for(int i=ind;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            fun(i+1,k,n-nums[i],nums,temp,ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<int>temp;
        vector<vector<int>>ans;
        fun(0,k,n,nums,temp,ans);
        return ans;
        
        
    }
};