class Solution {
    
 
//     int m,n;
//     int dfs(vector<vector<int>>&grid,int i ,int j)
//     {
        
//         if(i<0 || i>=m|| j<0 || j>=n||grid[i][j]==0)
//         {
//             return 0;
//         }
//         grid[i][j]=0;

//        return  1+ dfs(grid,i+1,j)+ dfs(grid,i,j+1)+dfs(grid,i-1,j)+dfs(grid,i,j-1);
//     }
    private:
    int dfs(vector<vector<int>>&grid,int i,int j)
    {
        int m=grid.size();
        int n=grid[0].size();
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0)
        {
            return 0;
        }
        grid[i][j]=0;
        return 1+dfs(grid,i+1,j)+dfs(grid,i,j+1)+dfs(grid,i-1,j)+dfs(grid,i,j-1);
        
    }
    public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
//          m=grid.size();
//          n=grid[0].size();
//         int area=0;
//         // vector<vector<bool>>vis(m,vector<bool>(n,false));
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//             if(grid[i][j]==1 )
//             {
                
//                   area=max(area,dfs(grid,i,j));
//             }
//         }
//       }
        
        
        // return area;
        // ------
        
        // --------
    // int row;
    // int col;
    // int iscount(vector<vector<int>>& grid, int i, int j){
    //     if(i<0 || i>=row || j<0 || j>=col || grid[i][j]==0) return 0;
    //     grid[i][j]=0;
    //     return 1+iscount(grid, i+1, j) + iscount(grid, i-1, j) + iscount(grid, i, j+1) + iscount(grid, i, j-1);
    // }
    // int maxAreaOfIsland(vector<vector<int>>& grid) {
    //     int sum=0;
    //     row=grid.size();
    //     col=grid[0].size();
    //     for(int i=0;i<row;i++){
    //         for(int j=0;j<col;j++){
    //             if(grid[i][j]==1){
    //                 sum=max(sum,iscount(grid, i, j));
    //             }
    //         }
    //     }
    //     return sum;
        int m=grid.size();
        int n=grid[0].size();
        int area=0;
        // vector<vector<bool>>vis(m,vector<int>(n,false));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    area=max(area,dfs(grid,i,j));
                }
            }
            
        }
        return area;
    }
};