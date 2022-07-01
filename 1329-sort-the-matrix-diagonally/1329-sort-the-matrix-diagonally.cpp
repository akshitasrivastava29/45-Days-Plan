class Solution {
    private:
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
        for(auto x:temp)
        {
            mat[i][j]=x;
            i++,j++;
        }
        
    }
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        if(n==1 || m==1)return mat;
        for(int i=0;i<m;i++){
            fun(0,i,mat);
        }
        for(int i=1;i<n;i++)
        {
            fun(i,0,mat);
        }
       return mat; 
    }
};