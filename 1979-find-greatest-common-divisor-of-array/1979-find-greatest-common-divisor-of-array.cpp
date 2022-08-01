class Solution {
    int getGCD(int a,int b)
    {
        if(a==0)return b;
        if(b==0)return a;
        while(a!=b)
        {
            if(a>b)
            {
                a=a-b;
            }
            else
            {
                b=b-a;
            }
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int mini=nums[0],maxi=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        return getGCD(maxi,mini);
        
    }
};