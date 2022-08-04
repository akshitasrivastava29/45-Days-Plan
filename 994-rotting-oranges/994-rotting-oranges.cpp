class Solution {
    // struct node{
    //     int x,y,t;
    //     node(int X,int Y,int T)
    //     {
    //        x=X;
    //         y=Y;
    //         t=T;
    //     }
    // };
    
//     struct node{
//     int x,y,t;
//         node(int _x,int _y,int _t)
//         {
//             x=_x;
//             y=_y;
//             t=_t;
            
//         }
//     };
public:
    int orangesRotting(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         queue<node>q;
//         int cntoranges=0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(grid[i][j]==2)
//                 {
//                     q.push(node(i,j,0));
//                 }
//                 if(grid[i][j]!=0)
//                 {
//                     cntoranges++;
//                 }
//             }
//         }
//         int ans=0;
//         int cnt=0;
//         while(!q.empty())
//         {
//             int x=q.front().x;
//             int y=q.front().y;
//             int t=q.front().t;
//             q.pop();
//             ans=max(ans,t);
//             cnt++;
//             int dx[]={-1,0,1,0};
//             int dy[]={0,1,0,-1};
//             for(int i=0;i<4;i++)
//             {
//                 int newX=x+dx[i];
//                 int newY=y+dy[i];
//                 if( newX >=0 && newX<n && newY >=0 && newY<m && grid[newX][newY]==1)
//                 {
//                     grid[newX][newY]=2;
//                     q.push(node(newX,newY,t+1));
//                 }
//             }
            
//         }
        
//         if(cnt==cntoranges)
//         {
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
        // ------
//         int n=grid.size();
//         int m=grid[0].size();
//         queue<node>q;
//         int cntoranges=0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(grid[i][j]==2)
//                 {
//                     q.push(node(i,j,0));
//                 }
//                 if(grid[i][j]!=0)
//                 {
//                     cntoranges++;
//                 }
//             }
//         }
//         int ans=0,cnt=0;
//         while(!q.empty())
//         {
//             int x=q.front().x;
//             int y=q.front().y;
//             int t=q.front().t;
//             q.pop();
//             ans=max(ans,t);
//             cnt++;
//             int dx[]={-1,0,1,0};
//             int dy[]={0,1,0,-1};
//             for(int ind=0;ind<4;ind++)
//             {
//                 int newX=x+dx[ind];
//                 int newY=y+dy[ind];
//                 if(newX>=0 && newX<n && newY>=0 && newY<m && grid[newX][newY]==1)
//                 {
//                     grid[newX][newY]=2;
//                     q.push(node(newX,newY,t+1));
//                 }
//             }
//         }
//         if(cnt==cntoranges)
//         {
//             return ans;
//         }
//         return -1;
        // --------------------
//         if(grid.size()==0)return 0;
//         int n=grid.size();
//         int m=grid[0].size();
//         int mins=0,tot=0,cnt=0;
//         queue<pair<int,int>>q;
//         for(int i=0;i<n;++i)
//         {
//             for(int j=0;j<m;++j)
//             {
//                 if(grid[i][j]!=0)
//                     tot++;
//                 if(grid[i][j]==2)
//                  q.push({i,j});
//             }
//         }
//         int dx[4]={0,0,1,-1};
//         int dy[4]={1,-1,0,0};
//         while(!q.empty())
//         {
//             int k=q.size();
//             cnt+=k;
//             while(k--)
//             {
//                 int x=q.front().first;
//                 int y=q.front().second;
//                 q.pop();
//                 for(int i=0;i<4;i++)
//                 {
//                     int newx=x+dx[i];
//                     int newy=y+dy[i];
//                     if(newx<0 || newy<0 || newx>=n || newy>=m ||grid[newx][newy]!=1)continue;
//                     grid[newx][newy]=2;
//                     q.push({newx,newy});
//                 }
//             }
//             if(!q.empty())mins++;
//         }
//         if(tot==cnt)
//         {
//             return mins;
//         }
//         return -1;
        
        int n=grid.size();
        int m=grid[0].size();
        if(n==0)return 0;
        int time=0,tot=0,cnt=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    tot++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
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
                    if(newx<0 || newx>=n || newy<0 || newy>=m || grid[newx][newy]!=1)
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
        if(tot==cnt)
        {
            return time;
        }
        return -1;
        
    }
};