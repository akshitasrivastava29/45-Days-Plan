class Solution {
    vector<int>sides={0,0,0,0};
    bool dfs(vector<int>&matchsticks,int i,int n,int target)
    {
        if(i>=n)
        {
            return true;
        }
        for(int j=0;j<4;j++)
        {
            if(sides[j]+matchsticks[i]<=target)
            {
                sides[j]+=matchsticks[i];
                if(dfs(matchsticks,i+1,n,target))
                {
                    return true;
                }
                sides[j]-=matchsticks[i];
            }
        }
        return false;
    }
public:
    bool makesquare(vector<int>& matchsticks) {
        int n=matchsticks.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=matchsticks[i];
        }
        if(sum%4!=0)
        {
            return false;
        }
        int target=sum/4;
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        return dfs(matchsticks,0,n,target);
        
    }
};