class Solution {
    vector<int>dx={-1,0,1,0};
    vector<int>dy={0,1,0,-1};
    int valid(int r,int c,vector<vector<int>>&grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[r][c]==-1 || grid[r][c]==3)
        {
            return 0;
        }
        if(grid[r][c]==2)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(grid[i][j]==0)
                    {
                        return 0;
                    }
                }
            }
            return 1; 
        }
        int ans=0;
        int temp=grid[r][c];
        grid[r][c]=3;
        for(int ind=0;ind<4;ind++)
        {
            int newx=r+dx[ind];
            int newy=c+dy[ind];
            if(newx>=0 && newy>=0 & newx<n && newy<m )
            {
                ans+=valid(newx,newy,grid);
            }
        }
        grid[r][c]=temp;
        return ans;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=valid(i,j,grid);
                }
            }
        }
        return ans;
        
        
        
    }
};