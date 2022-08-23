class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int r=0,c=m-1;
        while(r>=0 && c>=0 && r<n && c<m)
        {
            int x=(r-1<0)? -1 : mat[r-1][c];
            int y=(c-1<0)? -1 : mat[r][c-1];
            int z=(c+1==m)? -1: mat[r][c+1];
            int w=(r+1==n)? -1: mat[r+1][c];
            if(mat[r][c]>x && mat[r][c]>y && mat[r][c]>z && mat[r][c]>w)
            {
                return {r,c};
            }
            int p=max(x,max(y,max(z,w)));
            if(p==x)
            {
              r--;
            }
            else if(p==y)
            {
            c--;
            }
             else if(p==w)
            {
              
            r++;
            }
            else
            {
                c++;
            }
        }
        return {};
        
        
    }
};