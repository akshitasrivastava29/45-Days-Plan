class Solution {
    void dfs(vector<vector<int>>&image,int i,int j,int color,int n,int m,int src)
    {
        if(i<0 || j<0 || i>=n|| i>=m)return ;
        if(image[i][j]!=src)
        {
            return ;
        }
        image[i][j]=color;
        int di[4]={-1,1,0,0};
        int dj[4]={0,0,1,-1};
        for(int x=0;x<4;x++)
        {
            int newi=i+di[x];
            int newj=j+dj[x];
            dfs(image,newi,newj,color,n,m,src);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        if(image[sr][sc]==color)
        {
            return  image;
        }
        int src=image[sr][sc];
        dfs(image,sr,sc,color,n,m,src);
            return image;
        
    }
};