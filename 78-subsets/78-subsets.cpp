class Solution {
    void getsubsets(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        getsubsets(ind+1,nums,temp,ans);
        temp.pop_back();
        getsubsets(ind+1,nums,temp,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        getsubsets(0,nums,temp,ans);
        return ans;
        
        
    }
};