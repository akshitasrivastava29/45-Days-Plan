class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 ||i==n-1 || j==m-1) //boundary
                {
                    if(grid[i][j]==1)
                    {
                        q.push({i,j});
                        vis[i][j]=1;
                    }
                }
            }
        }
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            int dx[4]={-1,0,1,0};
            int dy[4]={0,1,0,-1};
            for(int i=0;i<4;i++)
            {
                int newx=x+dx[i];
                int newy=y+dy[i];
                if(newx>=0 && newx<n && newy>=0 && newy<m && vis[newx][newy]==0 && grid[newx][newy]==1)
                {
                    q.push({newx,newy});
                    vis[newx][newy]=1;
                }
            }
            
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                {
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};