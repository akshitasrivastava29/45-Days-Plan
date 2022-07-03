class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return n;
        int cnt=0;
        int prev=nums[1]-nums[0];
        
        if(prev!=0)
        {
            cnt=2;
        }
        else
        {
            cnt=1;
        }
        for(int i=2;i<n;i++)
        {
           int curr=nums[i]-nums[i-1];
            if((prev>=0 && curr<0) ||(prev<=0 && curr>0))
               {
                   cnt++;
                   prev=curr;
               }
        }
       return cnt; 
    }
};