class Solution {
    void dfs(vector<vector<int>>&heights,int row,int col,int prev,vector<vector<int>>&ocean)
    {
        int n =heights.size();
        int m=heights[0].size();
        if(row<0 || col<0 ||row>=n || col>=m )
        {
            return ;
        }
        if(heights[row][col]<prev)
        {
            return ;
        }
        if(ocean[row][col]==-1)
        {
            return;
        }
        ocean[row][col]=-1;
        dfs(heights,row+1,col,heights[row][col] ,ocean);
        dfs(heights,row-1,col,heights[row][col],ocean);
        dfs(heights,row,col+1,heights[row][col],ocean);
        dfs(heights,row,col-1,heights[row][col],ocean);
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n =heights.size();
        int m=heights[0].size();
        vector<vector<int>>ans;
        if(heights.size()==0)
        {
            return ans;
        }
        vector<vector<int>>pacific(n,vector<int>(m,0));
        vector<vector<int>>atlantic(n,vector<int>(m,0));
        for(int col=0;col<m;col++)
        {
            dfs(heights,0,col,INT_MIN,pacific);
            dfs(heights,n-1,col,INT_MIN,atlantic);
        }
        for(int row=0;row<n;row++)
        {
            dfs(heights,row,0,INT_MIN,pacific);
            dfs(heights,row,m-1,INT_MIN,atlantic);
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pacific[i][j]==atlantic[i][j] && pacific[i][j]==-1)
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