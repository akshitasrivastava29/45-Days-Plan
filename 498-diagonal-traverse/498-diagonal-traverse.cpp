class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int r=0,c=0;
        vector<int>res(m*n);
        if(n==0) return res;
        for(int i=0;i<res.size();i++)
        {
            res[i]=mat[r][c];
            if((r+c)%2==0)
            {
                if(c==m-1)
                {
                    r++; //as reach to end col now move to next row
                }
                else if(r==0)
                {
                    c++; // as move to outside of row so move to next col.
                }
                else
                {
                    r--,c++; // if r+c is even so move upward
                }
            }
            else
            {
                if(r==n-1)
                {
                    c++; //as row move outside so have to move next col
                }
                else if(c==0)
                {
                    r++; // as col==0 and outside so move to next row
                }
                else
                {
                    r++,c--; // as r+c is odd so move downward
                }
            }
        }
        return res;
        
    }
};