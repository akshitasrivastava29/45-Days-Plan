class Solution {
    private:
//     void dfs(vector<vector<char>>&grid,vector<vector<bool>>&vis ,int i, int j)
     // {
//         // int m=grid.size();
//         // int n=grid[0].size();
//         if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() ||grid[i][j]=='0'|| vis[i][j]==true)
//             return ;
    
//         vis[i][j]=true;
//         dfs(grid, vis, i - 1, j); // TOP
//         dfs(grid, vis, i + 1, j); // DOWN
//         dfs(grid, vis, i, j - 1); // LEFT
//        dfs(grid, vis, i, j + 1); // RIGHT
//     }
    void dfs(vector<vector<char>>&grid,vector<vector<bool>>&vis,int i,int j)
    {
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0' || vis[i][j]==true)return ;
        vis[i][j]=true;
        dfs(grid,vis,i-1,j);
        dfs(grid,vis,i,j+1);
        dfs(grid,vis,i+1,j);
        dfs(grid,vis,i,j-1);
        
    }

            
public:
    int numIslands(vector<vector<char>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         int cnt=0;
//         vector<vector<bool>>vis(m,vector<bool>(n,false));
//         int count=0;
//         for(int i=0;i<m;i++)
//             for(int j=0;j<n;j++)
            
//                 if(grid[i][j]=='1'&& vis[i][j]==false)
//                 {
//                     dfs(grid,vis,i,j);
                    
//                     cnt+=1;
//                 }
            
        
//         return cnt;
        
        // int m=grid.size();
        // int n=grid[0].size();
        // int cnt=0;
        // vector<vector<bool>>vis(m,vector<bool>(n,false));
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(grid[i][j]=='1' && vis[i][j]==false)
        //         {
        //             dfs(grid,vis,i,j);
        //             cnt+=1;
        //         }
        //     }
        // }
        // return cnt;
        
        
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==false)
                {
                    dfs(grid,vis,i,j);
                    cnt+=1;
                }
            }
            
        }
        return cnt;
//     public:
//     void connectComponents(vector<vector<char>> &grid, vector<vector<bool>> &vis, int i, int j)
//     {
//         // Boundary Conditions
//         if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0' || vis[i][j] == true)
//             return;

//         // mark the current land as visited
//         vis[i][j] = true;

//         connectComponents(grid, vis, i - 1, j); // TOP
//         connectComponents(grid, vis, i + 1, j); // DOWN
//         connectComponents(grid, vis, i, j - 1); // LEFT
//         connectComponents(grid, vis, i, j + 1); // RIGHT
//     }

//     int numIslands(vector<vector<char>>& grid)
//     {
//         int m = grid.size();
//         int n = grid[0].size();

//         vector<vector<bool>> vis(m, vector<bool>(n, false));

//         int count = 0;

//         for (int i = 0; i < m; i++)
//             for (int j = 0; j < n; j++)
//                 if (grid[i][j] == '1' && vis[i][j] == false)
//                 {
//                     connectComponents(grid, vis, i, j);
//                     count++;
//                 }

//         return count;
        
        
  }
 };