class Solution {
    bool findword(vector<vector<char>>& board, string word,int i,int j,int ind)
    {
        int n=board.size();
        int m=board[0].size();
        if(ind==word.size())
        {
            return true;
        }
        if(i<0 || j<0 || i>n-1 || j>m-1)
        {
            return false;
        }
        if(board[i][j]!=word[ind])
        {
            return false;
        }
        board[i][j]='*';
        bool check=findword(board,word,i-1,j,ind+1)||findword(board,word,i,j+1,ind+1) || findword(board,word,i+1,j,ind+1) ||findword(board,word,i,j-1,ind+1);
        board[i][j]=word[ind];
        return check;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(findword(board,word,i,j,0))
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};