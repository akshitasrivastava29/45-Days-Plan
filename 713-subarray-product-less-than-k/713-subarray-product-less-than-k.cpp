class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int prod=1;
        int cnt=0;
        int i=0,j=0;
        while(j<n)
        {
            if(prod*nums[j]<k)
            {
                prod*=nums[j];
                cnt+=(j-i+1);
                j++;
            }
            else
            {
                if(i<j)
                {
                    prod=prod/nums[i];
                }
                else
                {
                    j++;
                }
                i++;
            }
        }
       return cnt; 
        
    }
};