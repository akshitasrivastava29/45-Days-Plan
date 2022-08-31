class Solution {
    private:
    // void dfs(vector<vector<int>>& heights,int r ,int c ,int prev,vector<vector<int>>&ocean)
    // {
    //     int n=heights.size();
    //     int m=heights[0].size();
    //     if(r<0 || c<0 || r>=n || c>=m) return ;
    //     if(heights[r][c]<prev)
    //     {
    //         return;
    //     }
    //     if(ocean[r][c]==-1)
    //     {
    //         return;
    //     }
    //     ocean[r][c]=-1;
    //     dfs(heights,r+1,c,heights[r][c],ocean);
    //     dfs(heights,r-1,c,heights[r][c],ocean);
    //     dfs(heights,r,c+1,heights[r][c],ocean);
    //     dfs(heights,r,c-1,heights[r][c],ocean);
    // }
    void dfs(vector<vector<int>>&heights,int r,int c,int prev,vector<vector<int>>&ocean)
    {
        int n=heights.size();
        int m=heights[0].size();
        if(r<0 || c<0 || r>=n||c>=m) return ;
        if(heights[r][c]<prev)
        {
            return ;
        }
        if(ocean[r][c]==-1)
        {
            return;
        }
        ocean[r][c]=-1;
        dfs(heights,r+1,c,heights[r][c],ocean);
        dfs(heights,r-1,c,heights[r][c],ocean);
        dfs(heights,r,c+1,heights[r][c],ocean);
        dfs(heights,r,c-1,heights[r][c],ocean);
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//         int n=heights.size();
//         int m=heights[0].size();
//         vector<vector<int>>ans;
//         if(n==0)
//         {
//             return  ans;
//         }
//         vector<vector<int>>pac(n,vector<int>(m,0));
//         vector<vector<int>>atl(n,vector<int>(m,0));
//         for(int c=0;c<m;c++)
//         {
//             dfs(heights,0,c,INT_MIN,pac);
//             dfs(heights,n-1,c,INT_MIN,atl);
//         }
//         for(int r=0;r<n;r++)
//         {
//             dfs(heights, r,0,INT_MIN,pac);
//             dfs(heights,r,m-1,INT_MIN,atl);
//         }
//         vector<int>v;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(pac[i][j]==atl[i][j] && pac[i][j]==-1)
//                 {
//                     v.clear();
//                     v.push_back(i);
//                     v.push_back(j);
//                     ans.push_back(v);
                    
//                 }
//             }
//         }
        
//         return ans;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>ans;
        if(n==0) return ans;
        vector<vector<int>>pac(n,vector<int>(m,0));
        vector<vector<int>>atl(n,vector<int>(m,0));
        for(int c=0;c<m;c++)
        {
            dfs(heights,0,c,INT_MIN,pac);
            dfs(heights,n-1,c,INT_MIN,atl);
        }
        for(int r=0;r<n;r++)
        {
            dfs(heights,r,0,INT_MIN,pac);
            dfs(heights,r,m-1,INT_MIN,atl);
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pac[i][j]==atl[i][j] && pac[i][j]==-1)
                {
                    v.clear();
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
            }
        }
        return ans;
        
    }
};