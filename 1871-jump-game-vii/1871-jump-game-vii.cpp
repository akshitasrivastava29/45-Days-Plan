class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n=s.length();
        queue<int>q;
        q.push(0);
        int maxreach=0;
        while(!q.empty())
        {
            int i=q.front();
            q.pop();
            for(int j=max(i+minJump,maxreach+1);j<=min(i+maxJump,n-1);j++)
            {
                if(s[j]=='0')
                {
                    if(j==n-1)return true;
                    q.push(j);
                }
            }
            maxreach=i+maxJump;
        }
        return false;
        
        
    }
};