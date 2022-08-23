class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        int j=0,cnt=0;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[j] && nums[i]>nums[i+1] || nums[j]>nums[i] &&nums[i]<nums[i+1])
            {
                cnt++;
                j=i;
            }
        }
        return cnt;
        
    }
};