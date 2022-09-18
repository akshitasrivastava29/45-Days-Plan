// #define pr  pair<int,pair<int,int>>
#define pr pair<int,pair<int,int>>
class Solution {
   
public:
    int trapRainWater(vector<vector<int>>& grid) {
        // int n=grid.size();
        // int m=grid[0].size();
        // vector<vector<int>>vis(n,vector<int>(m,0));
        // priority_queue<pr,vector<pr>,greater<pr>>pq;
        // int vol=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(i==0 || i==n-1 || j==0 || j==m-1)
        //         {
        //             pq.push({grid[i][j],{i,j}});
        //             vis[i][j]=true;
        //         }
        //     }
        // }
        // int minbht=0;
        // while(!pq.empty())
        // {
        //     int currht=pq.top().first;
        //     int r=pq.top().second.first;
        //     int c=pq.top().second.second;
        //     pq.pop();
        //     minbht=max(minbht,currht);
        //     int dr[4]={0,0,-1,1};
        //     int dc[4]={1,-1,0,0};
        //     for(int dir=0;dir<4;dir++)
        //     {
        //         int newr=r+dr[dir];
        //         int newc=c+dc[dir];
        //         if(newr>0 && newc>=0 && newr<n && newc<m && vis[newr][newc]==false)
        //         {
        //             pq.push({grid[newr][newc],{newr,newc}});
        //             vis[newr][newc]=true;
        //             if(grid[newr][newc]<minbht)
        //             {
        //                 vol+=minbht-grid[newr][newc];
        //             }
        //         }
        //     }
        // }
        // return vol;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        priority_queue<pr,vector<pr>,greater<pr>>pq;
        int vol=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || i==n-1 || j==0 || j==m-1) //if it is boundary
                {
                    pq.push({grid[i][j],{i,j}});
                    vis[i][j]=true;
                }
            }
        }
        int minbht=0;
        while(!pq.empty())
        {
            int currht=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            minbht=max(minbht,currht);
            int dr[4]={-1,0,1,0};
            int dc[4]={0,1,0,-1};
            for(int dir=0;dir<4;dir++)
            {
                int newr=r+dr[dir];
                int newc=c+dc[dir];
                if(newr>=0 && newc>=0  && newr<n && newc<m && vis[newr][newc]==false )
                {
                    pq.push({grid[newr][newc],{newr,newc}});
                    vis[newr][newc]=true;
                    if(grid[newr][newc]<minbht)
                    {
                        vol+=minbht-grid[newr][newc];
                    }
                }
            }
        }
        return vol;
        
        
    }
};