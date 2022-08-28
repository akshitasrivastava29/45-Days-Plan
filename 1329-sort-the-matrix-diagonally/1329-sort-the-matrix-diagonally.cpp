class Solution {
    void fun(int i,int j,vector<vector<int>>&mat)
    {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>temp;
        int ti=i,tj=j;
        while(ti<n && tj<m)
        {
            temp.push_back(mat[ti][tj]);
            ti++,tj++;
        }
        sort(temp.begin(),temp.end());
        for(auto it:temp)
        {
            mat[i][j]=it;
            i++,j++;
        }
    }
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        if(n==1 || m==1) return mat;
        for(int j=0;j<m;j++)
        {
            fun(0,j,mat);
        }
        for(int i=1;i<n;i++)
        {
            fun(i,0,mat);
        }
      return mat;  
    }
};