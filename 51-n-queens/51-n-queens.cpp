class Solution {
//     private:
//     bool issafe(int row,int col,vector<string>&board,int n)
//     {
//         int duprow=row;
//         int dupcol=col;
//         while(row>=0 && col>=0)
//         {
//             if(board[row][col]=='Q')
//             return false;
//             row--;
//             col--;
//         }
//         row=duprow;
//         col=dupcol;
//        while(col>=0)
//        {
//            if(board[row][col]=='Q')
           
//                return false;
//                col--;
           
//        }
//         row=duprow;
//         col=dupcol;
//         while(row<n && col>=0)
//               {
//                   if(board[row][col]=='Q')
                  
//                       return false;
//                       row++;
//                       col--;
                  
//               }
//         return true;
//     }
    // private:
    // void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n)
    // {
    //     if(col==n)
    //     {
    //         ans.push_back(board);
    //         return ;
    //     }
    //     for(int row=0;row<n;row++)
    //     {
    //         if(issafe(row,col,board,n))
    //         {
    //             board[row][col]='Q';
    //             solve(col+1,board,ans,n);
    //             board[row][col]='.';
    //         }
    //     }
    // }
//     private:
//     bool isSafe(int row,int col,vector<string>&temp,int n)
//     {
//         int duprow=row, dupcol=col;
//         while(row>=0&&col>=0)
//         {
//             if(temp[row][col]=='Q')
//                {
//                     return false;
//             }
//                 row--,col--;
                
//         }
//             row=duprow;
//             col=dupcol;
//         while(col>=0)
//         {
//             if(temp[row][col]=='Q')
//             {
//                 return false;
//             }
//                 col--;
            
//         }
//         row=duprow;
//         col=dupcol;
//         while(row<n && col>=0)
//         {
//             if(temp[row][col]=='Q')
//             {
//                 return false;
//             }
//                 row++,col--;
            
//         }
//         return true;
        
//     }
    private:
    bool issafe(int i,int j,vector<string>&temp,int n)
    {
        int row=i,col=j;
        while(i>=0 && j>=0)
        {
            if(temp[i][j]=='Q')
            {
                return false;
            }
            i--,j--;
        }
        i=row,j=col;
        while(j>=0)
        {
            if(temp[i][j]=='Q'){
                return false;
            }
            j--;
        }
        i=row,j=col;
        while(i<n &&j>=0)
        {
            if(temp[i][j]=='Q')
            {
                return false;
            }
            i++,j--;
        }
        return true;
        
    }
    // private:
    // void Nqueen(int col,vector<string>&temp,vector<vector<string>>&ans,int n)
    // {
    //     if(col==n)
    //     {
    //         ans.push_back(temp);
    //         return;
    //     }
    //     for(int row=0;row<n;row++)
    //     {
    //         if(isSafe(row,col,temp,n)==true)
    //            {
    //                temp[row][col]='Q';
    //                 Nqueen(col+1,temp,ans,n);
    //                 temp[row][col]='.';
    //            }
    //     }
    // }
    private:
    void solve(int j,vector<string>&temp,vector<vector<string>>&ans,int n)
    {
        if(j==n)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(issafe(i,j,temp,n)==true)
            {
                temp[i][j]='Q';
                solve(j+1,temp,ans,n);
                temp[i][j]='.';
            }
        }
    }
    
public:
    
    vector<vector<string>> solveNQueens(int n)
    {
        // vector<vector<string>>ans;
        // vector<string>board(n);
        // string s(n,'.');
        // for(int i=0;i<n;i++){
        //     board[i]=s;
        // }
        //     solve(0,board,ans,n);
        //     return ans;
        // _________________-----
        // vector<vector<string>>ans;
        // vector<string>temp(n);
        // string s(n,'.');
        // for(int i=0;i<n;i++)
        //     {
        //         temp[i]=s;
        //     }
        // Nqueen(0,temp,ans,n);
        // return ans;
        // -------------
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};