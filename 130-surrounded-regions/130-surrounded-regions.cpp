class Solution {
    void dfs(vector<vector<char>>&board,int r,int c)
    {
        int n=board.size();
        int m=board[0].size();
        if(r<0 || r>=n || c<0 || c>=m || board[r][c]!='O')
        {
            return ;
        }
        board[r][c]='#';
        dfs(board,r+1,c);
        dfs(board,r,c-1);
        dfs(board,r-1,c);
        dfs(board,r,c+1);
        
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            dfs(board,i,0);
            dfs(board,i,m-1);
        }
        for(int j=0;j<m;j++)
        {
            dfs(board,0,j);
            dfs(board,n-1,j);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='#')board[i][j]='O';
            }
        }
        
    }
};