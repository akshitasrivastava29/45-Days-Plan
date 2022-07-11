class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int i=0,j=m-1;
//         while(i<n&&j>=0)
//         {
//             if(matrix[i][j]==target)
//             {
//                 return true;
//             }
//             if(matrix[i][j]>target)
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }

//         }
//         return false;
        // ___________________________________---
//             int n=matrix.size();
//           int m=matrix[0].size();
//         if(!matrix.size())
    
//             return false;
//         int low=0,high=(n*m)-1,mid;
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(matrix[mid/m][mid%m]==target)
//             {
//                 return true;
//             }
//              if(matrix[mid/m][mid%m]<target)
//             {
//                 low=mid+1;
//             }
//             else
//             {
//                 high=mid-1;
//             }
//         }
//         return false;
        // ______________________________________-
        // int n=matrix.size();
        //  int m=matrix[0] .size();
        // int i=0,j=m-1,mid;
        // if(n==0)
        // {
        //     return false;
        // }
        // while(i<n && j>=0)
        // {
        //     mid=i+(j-i)/2;
        //     if(matrix[i][j]==target)
        //     {
        //         return true;
        //     }
        //     else if(matrix[i][j]>target)
        //     {
        //         j--;
        //     }
        //     else {
        //         i++;
        //     }
        // }
        // return false;
        // ___________________--
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int i=0,j=m-1;
        // int mid;
        // if(n==0)
        // {
        //     return false;
        // }
        // while(i<n&& j>=0)
        // {
        //     mid=i+(j-i)/2;
        //     if(matrix[i][j]==target)
        //     {
        //         return true;
        //     }
        //     else if(matrix[i][j]>target)
        //     {
        //         j--;
        //     }
        //     else
        //     {
        //         i++;
        //     }
        // }
        // return false;
        // _____________________________--
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n && j>=0)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};