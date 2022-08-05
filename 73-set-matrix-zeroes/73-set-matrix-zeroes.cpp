class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int col0=1;
        // int n=matrix.size();
        // int m=matrix[0].size();
        // for(int i=0;i<n;i++)
        // {
        //     if(matrix[i][0]==0)
        //         col0=0;
        //     for(int j=1;j<m;j++)
        //     { 
        //        if (matrix[i][j]==0)
        //        {
        //            matrix[i][0]=matrix[0][j]=0;
        //         }
        // }
        // }
        //     for(int i=n-1;i>=0;i--)
        //     {
        //         for(int j=m-1;j>=1;j--)
        //         if(matrix[i][0]==0||matrix[0][j]==0)
        //             matrix[i][j]=0;
        //         if(col0==0)
        //             matrix[i][0]=0;
        //     }
        // >>>>>>
        // int n=matrix.size();
        // int m=matrix[0].size();
        // for(Int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             int ind=i-1;
        //             while()
        //         }
        //     }
        // }
        // >>>>>
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     int ind=i-1;
//                     while(ind>=0)
//                     {
//                         if(matrix[ind][j]!=0)
//                         {
//                             matrix[ind][j]=-1;
//                         }
//                         ind--;
//                     }
//                      ind=i+1;
//                     while(ind<n)
//                     {
//                         if(matrix[ind][j]!=0)
//                         {
//                             matrix[ind][j]=-1;
//                         }
//                         ind++;
//                     }
//                      ind=j-1;
//                     while(ind>=0)
//                     {
//                         if(matrix[i][ind]!=0)
//                         {
//                             matrix[i][ind]=-1;
//                         }
//                         ind--;
//                     }
//                      ind=j+1;
//                     while(ind<m)
//                     {
//                         if(matrix[i][ind]!=0)
//                         {
//                             matrix[i][ind]=-1;
//                         }
//                         ind++;
//                     }
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//             {
//                 for(int j=0;j<m;j++)
//                 {
//                     if(matrix[i][j]<=0)
//                     {
//                         matrix[i][j]=0;
//                     }
//                 }
//             }
        // >>>>>>>>>
        // int col0=1;
        // for(int i=0;i<n;i++)
        // {
        //     if(matrix[i][0]==0) col0=0;
        //     for(int j=1;j<m;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             matrix[i][0]=matrix[0][j]=0;
        //         }
        //     }
        // }
        // for(int i=n-1;i>=0;i--)
        // {
        //     for(int j=m-1;j>=1;j--)
        //     {
        //         if(matrix[i][0]==0||matrix[0][j]==0)
        //         {
        //             matrix[i][j]=0;
        //         }
        //     }
        //     if(col0==0)
        //     {
        //         matrix[i][0]=0;
        //     }
        // }
        // _____________________-_____________
//         int var=1;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         for(int i=0;i<m;i++)
//         {
//             if(matrix[i][0]==0)
//             {
//                 var=0;
//             }
//             for(int j=1;j<n;j++)
//                 {
//                     if(matrix[i][j]==0)
//                     matrix[i][0]=matrix[0][j]=0;
//                 }
//         }
//         for(int i=m-1;i>=0;i--)
//         {
//             for(int j=n-1;j>=1;j--)
//             {
//                 if(matrix[i][0]==0 || matrix[0][j]==0)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//                 if(var==0){
//                     matrix[i][0]=0;
//                 }
            
//         }
        // +++++++++++++++++=======
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int col0=1;
//         for(int i=0;i<m;i++)
//         {
//             if(matrix[i][0]==0) col0=0;
//             for(int j=1;j<n;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     matrix[i][0]=0;
//                     matrix[0][j]=0;
//                 }
//             }
            
//         }
//         for(int i=m-1;i>=0;i--)
//         {
//             for(int j=n-1;j>=1;j--)
//             {
//                 if(matrix[i][0]==0  || matrix[0][j]==0)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//             if(col0==0)
//             {
//                 matrix[i][0]=0;
//             }
//         }
        int n=matrix.size();
        int m=matrix[0].size();
        int col0=1;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            if(col0==0)
        {
            matrix[i][0]=0;
        }   
        }
        
        
        
    }
};