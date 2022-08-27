class Solution {
    void fun(int ind,vector<int>&candidates,int target,vector<int>temp,vector<vector<int>>&ans)
    {
        if(ind==candidates.size())
        {
            if(target==0)
            {
            ans.push_back(temp);
            }
            return;
        }
        if(candidates[ind]<=target)
        {
            temp.push_back(candidates[ind]);
            fun(ind,candidates,target-candidates[ind],temp,ans);
            temp.pop_back();
        }
            fun(ind+1,candidates,target,temp,ans);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>temp;
        vector<vector<int>>ans;
        fun(0,candidates,target,temp,ans);
        return ans;
        
        
        
    }
};