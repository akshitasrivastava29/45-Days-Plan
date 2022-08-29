class Solution {
//     void dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<char>>&grid)
//     {
//         int n=grid.size();
//         int m=grid[0].size();
//         if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==true || grid[i][j]=='0')
//         {
//             return;
//         }
//         vis[i][j]=true;
//         dfs(i-1,j,vis,grid);
//         dfs(i,j+1,vis,grid);
//         dfs(i+1,j,vis,grid);
//         dfs(i,j-1,vis,grid);      

//     }
    void dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<char>>&grid )
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==true || grid[i][j]=='0')
        {
            return;
        }
        vis[i][j]=true;
        dfs(i-1,j,vis,grid);
        dfs(i,j+1,vis,grid);
        dfs(i+1,j,vis,grid);
        dfs(i,j-1,vis,grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int cnt=0;
//         vector<vector<bool>>vis(n,vector<bool>(m,false));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(vis[i][j]==false && grid[i][j]=='1')
//                 {
//                     dfs(i,j,vis,grid);
//                     cnt++;
                    
//                 }
//             }
//         }
        
//         return cnt;
        
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==false && grid[i][j]=='1')
                {
                    dfs(i,j,vis,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};