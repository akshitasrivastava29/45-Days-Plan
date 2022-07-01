class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(abs(nums[i]-0)<=mini)
            {
                mini=abs(nums[i]);
            }
        }
        auto t=find(nums.begin(),nums.end(),mini);
        if(t!=nums.end())
        {
            return mini;
        }
        return -mini;
    }
};