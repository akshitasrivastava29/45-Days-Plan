class Solution {
    void fun(int ind,vector<int>&temp,vector<vector<int>>&ans,vector<int>& candidates,int target)
    {
        int n=candidates.size();
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(i>ind &&  candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(candidates[i]>target)
            {
                break;
            }
            temp.push_back(candidates[i]);
            fun(i+1,temp,ans,candidates,target-candidates[i]);
            temp.pop_back();
            
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        vector<vector<int>>ans;
        fun(0,temp,ans,candidates,target);
        return ans;
        
        
    }
};