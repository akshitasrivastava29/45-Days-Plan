class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp,mpl;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:nums)
        {
            if(mp[i]==0)
            continue;
            mp[i]--;
            if(mpl[i-1]>0)
            {
                mpl[i-1]--;
                mpl[i]++;
            }
            else if(mp[i+1]!=0 && mp[i+2]!=0)
            {
                mp[i+1]--;
                mp[i+2]--;
                mpl[i+2]++;
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
};