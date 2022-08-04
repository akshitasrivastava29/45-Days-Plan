class Solution {
    // private:
    // void dfs(vector<vector<int>>&image,int i,int j,int newColor,int rows,int cols,int source)
    // {
    //     if(i<0 || i>=rows || j<0 || j>=cols )
    //     {
    //         return;
    //     }
    //     if(image[i][j]!=source)
    //     {
    //         return;
    //     }
    //     image[i][j]=newColor;
    //     dfs(image,i-1,j,newColor,rows,cols,source);
    //     dfs(image,i,j+1,newColor,rows,cols,source);
    //     dfs(image,i+1,j,newColor,rows,cols,source);
    //     dfs(image,i,j-1,newColor,rows,cols,source);
    // }
    private:
    // void dfs(vector<vector<int>>&image,int i,int j,int newColor,int r,int c,int source)
    // {
    //     if(i<0 || j<0 || i>=r || j>=c)
    //     {
    //         return ;
    //     }
    //     if(image[i][j]!=source)
    //     {
    //         return ;
    //     }
    //     image[i][j]=newColor;
    //     int di[]={1,0,-1,0};
    //     int dj[]={0,1,0,-1};
    //     for(int x=0;x<4;x++)
    //     {
    //         dfs(image,i+di[x],j+dj[x],newColor,r,c,source);
    //     }
    // }
    // ---------------
    // void dfs(vector<vector<int>>&image,int i,int j,int newColor,int n,int m,int src)
    // {
    //     if(i<0 || j<0 || i>=n || j>=m)
    //     {
    //         return ;
    //     }
    //     if(image[i][j]!=src)
    //     {
    //         return;
    //     }
    //     image[i][j]=newColor;
    //     int di[]={1,0,-1,0};
    //     int dj[]={0,1,0,-1};
    //     for(int x=0;x<4;x++)
    //     {
    //         dfs(image,i+di[x],j+dj[x],newColor,n,m,src);
    //     }
    // }
    // -----------------
        void dfs(vector<vector<int>>&image,int i,int j,int newColor,int n,int m,int source)
    {
        if(i<0 || i>=n | j<0 || j>=m)return ;
        if(image[i][j]!=source) return ;
        image[i][j]=newColor;
        int di[]={-1,0,1,0};;
        int dj[]={0,1,0,-1};
        for(int x=0;x<4;x++)
        {
            int newi=i+di[x];
            int newj=j+dj[x];
            dfs(image,newi,newj,newColor,n,m,source);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // int rows=image.size();
        // int cols=image[0].size();
        // if(image[sr][sc]==newColor)return image;
        // int source=image[sr][sc];
        // dfs(image,sr,sc,newColor,rows,cols,source);
        // return image
        // _________________--
        // int r=image.size();
        // int c=image[0].size();
        // if(image[sr][sc]==newColor)
        // {
        //     return image;
        // }
        // int source=image[sr][sc];
        // dfs(image,sr,sc,newColor,r,c,source);
        // return image;
        // -------------------
        // int n=image.size();
        // int m=image[0].size();
        // if(image[sr][sc]==newColor)
        // {
        //     return image;
        // }
        // int src=image[sr][sc];
        // dfs(image,sr,sc,newColor,n,m,src);
        // return image;
        // ---------------------
        int n=image.size();
        int m=image[0].size();
        if(image[sr][sc]==newColor)
        {
            return image;
        }
        int source=image[sr][sc];
        dfs(image,sr,sc,newColor,n,m,source);
        return image;
        
        
        
    }
    
};