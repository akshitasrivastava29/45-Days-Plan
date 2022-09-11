class Solution {
    
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(n==0) return 0;
        int time=0,cnt=0,total=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    total++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty())
        {
            int size=q.size();
            cnt+=size;
            while(size--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int k=0;k<4;k++)
                {
                    int newx=x+dx[k];
                    int newy=y+dy[k];
                    if(newx<0 || newx>=n || newy<0 || newy>=m|| grid[newx][newy]!=1)
                    {
                        continue;
                    }
                    grid[newx][newy]=2;
                    q.push({newx,newy});
                }
            }
            if(!q.empty())
             {
            time++;
            }
        }
        
        if(total==cnt)
        {
            return time;
        }
        return -1;

        
        
    }
};