class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
        }
        for(auto x:mp)
        {
            if(x.second%n==0)
            {
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};