class Solution {
    void dfs(int num,int digit,int n,int k,vector<int>&ans)
    {
        if(digit==n)
        {
            ans.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int last=num%10;
            if(abs(last-i)==k)
            {
                dfs(num*10+i,digit+1,n,k,ans);
            }
        }
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans;
        for(int i=1;i<=9;i++)
        {
            dfs(i,1,n,k,ans);
        }
        return ans;
    }
};