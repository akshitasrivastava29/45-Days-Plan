class Solution {
    private:
//     void fun(int i,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int target)
//     {
//         int n=nums.size();
//         if(i==n)
//         {
//             if(target==0)
//             {
//                 ans.push_back(ds);
//             }
//             return ;
//         }
        
//     if(nums[i]<=target)
//     {
//         ds.push_back(nums[i]);
//             fun(i,nums,ds,ans,target-nums[i]);
//         ds.pop_back();
//     }
//             fun(i+1,nums,ds,ans,target);
    
// }
    void getcombo(int ind,vector<int>&candidates, vector<int>&ds,vector<vector<int>>&ans,int target)
    {
        int n=candidates.size();
        if(ind==n)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return ;
        }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            getcombo(ind,candidates,ds,ans,target-candidates[ind]);
            ds.pop_back();
        }
            getcombo(ind+1,candidates,ds,ans,target);
        
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int>ds;
//         vector<vector<int>>ans;
//         fun(0,candidates,ds,ans,target);
        
//         return ans;
        
        
        vector<int>ds;
        vector<vector<int>>ans;
        getcombo(0,candidates,ds,ans,target);
        return ans;
    }
};