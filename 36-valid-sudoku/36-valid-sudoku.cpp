class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!='.')
                {
                    for(int k=0;k<9;k++)
                    {
                        if(board[i][k]!='.')
                        {
                            if(board[i][k]==board[i][j] && (k!=j))
                                return false;
                        }
                        if(board[k][j]!='.')
                        {
                           if( board[k][j]==board[i][j] &&( k!=i))
                                return false;
                        }
                        if(board[3*(i/3)+k/3][3*(j/3)+k%3]!='.')
                        {
                           if(board[3*(i/3)+k/3][3*(j/3)+k%3]==board[i][j] &&  3*(i/3)+k/3!=i && 3*(j/3)+k%3!=j) 
                           {
                               return false;
                           }
                        }
                    }
                }
            }
        }
        return true;
        
    }
};