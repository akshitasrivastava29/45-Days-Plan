class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else
                {
                    vis[i][j]=0;
                }
             }
        }
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            dis[row][col]=dist; // to put distance in ans matrix
            int dr[4]={-1,0,1,0};
            int dc[4]={0,1,0,-1};
            for(int dir=0;dir<4;dir++)
            {
                int newr=row+dr[dir];
                int newc=col+dc[dir];
            
                if(newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc]==0)
                {
                    q.push({{newr,newc},dist+1});
                    vis[newr][newc]=1;
                }
            }
        }
        return dis;
        
    }
};